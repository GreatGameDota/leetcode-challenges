class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        queue<vector<int>> q;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j] == 2)
                    q.push({i, j, 0});

        int ret = 0;
        while (!q.empty())
        {
            vector<int> v = q.front();
            q.pop();
            int i = v[0];
            int j = v[1];
            int d = v[2];
            if (!(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0))
            {
                if (grid[i][j] == 1)
                    ret = max(ret, d);
                grid[i][j] = 0;

                q.push({i + 1, j, d + 1});
                q.push({i - 1, j, d + 1});
                q.push({i, j + 1, d + 1});
                q.push({i, j - 1, d + 1});
            }
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j] == 1)
                    return -1;
        return ret;
    }
};