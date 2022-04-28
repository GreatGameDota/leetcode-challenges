class Solution
{
    class Node
    {
    public:
        int val;
        vector<int> edges;
        Node()
        {
            edges = vector<int>(4, -1);
        }
    };

public:
    int minimumEffortPath(vector<vector<int>> &heights)
    {
        int n = heights.size(), m = heights[0].size();
        vector<vector<Node>> graph(n, vector<Node>(m, Node()));
        int min = INT_MAX, max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                graph[i][j].val = heights[i][j];
                if (heights[i][j] > max)
                    max = heights[i][j];
                if (heights[i][j] < min)
                    min = heights[i][j];

                if (i > 0)
                    graph[i][j].edges[0] = abs(heights[i - 1][j] - heights[i][j]);

                if (i < n - 1)
                    graph[i][j].edges[1] = abs(heights[i + 1][j] - heights[i][j]);

                if (j > 0)
                    graph[i][j].edges[2] = abs(heights[i][j - 1] - heights[i][j]);

                if (j < m - 1)
                    graph[i][j].edges[3] = abs(heights[i][j + 1] - heights[i][j]);
            }
        }

        int start = 0, end = max - min;
        int ret = -1;
        while (start <= end)
        {
            int mid = (start + end) / 2;

            bool found = false;
            vector<vector<int>> seen(n, vector<int>(m, 1));
            dfs(graph, seen, 0, 0, found, mid);

            if (found)
            {
                ret = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return ret;
    }

    void dfs(vector<vector<Node>> &g, vector<vector<int>> &seen, int i, int j, bool &found, int thres)
    {
        if (i == g.size() - 1 && j == g[0].size() - 1)
            found = true;
        if (found)
            return;

        seen[i][j] = 0;
        Node no = g[i][j];
        for (int k = 0; k < 4; k++)
        {
            if (no.edges[k] != -1 && no.edges[k] <= thres)
            {
                if (k == 0 && seen[i - 1][j] > 0)
                    dfs(g, seen, i - 1, j, found, thres);
                if (k == 1 && seen[i + 1][j] > 0)
                    dfs(g, seen, i + 1, j, found, thres);
                if (k == 2 && seen[i][j - 1] > 0)
                    dfs(g, seen, i, j - 1, found, thres);
                if (k == 3 && seen[i][j + 1] > 0)
                    dfs(g, seen, i, j + 1, found, thres);
            }
        }
    }
};