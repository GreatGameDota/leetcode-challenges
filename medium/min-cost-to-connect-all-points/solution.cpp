class Solution
{
    class Node
    {
    public:
        int x;
        int y;
        vector<int> edges;
        Node(int size)
        {
            edges = vector<int>(size, INT_MAX);
        }
    };

public:
    int minCostConnectPoints(vector<vector<int>> &points)
    {
        int tot = 0;
        vector<Node> nodes(points.size(), Node(points.size()));
        for (int i = 0; i < points.size(); i++)
        {
            nodes[i].x = points[i][0];
            nodes[i].y = points[i][1];

            for (int j = 0; j < points.size(); j++)
                if (i != j)
                    nodes[j].edges[i] = dist(points[i][0], points[j][0], points[i][1], points[j][1]);
        }

        vector<int> seen(points.size(), 0);
        vector<int> keys(points.size(), INT_MAX);
        vector<int> parents(points.size(), -1);
        parents[0] = -1;
        keys[0] = 0;
        for (int i = 0; i < nodes.size(); i++)
        {
            int min = INT_MAX;
            int min_id = -1;
            for (int j = 0; j < nodes.size(); j++)
            {
                if (seen[j] == 0 && keys[j] < min)
                {
                    min = keys[j];
                    min_id = j;
                }
            }
            seen[min_id] = 1;

            for (int j = 0; j < nodes.size(); j++)
            {
                if (seen[j] == 0 && nodes[min_id].edges[j] < keys[j])
                {
                    keys[j] = nodes[min_id].edges[j];
                    parents[j] = min_id;
                }
            }
        }

        for (int i = 1; i < parents.size(); i++)
            tot += nodes[i].edges[parents[i]];
        return tot;
    }

    int dist(int x1, int x2, int y1, int y2)
    {
        return abs(x1 - x2) + abs(y1 - y2);
    }
};