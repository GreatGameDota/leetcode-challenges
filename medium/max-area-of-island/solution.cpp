class Solution
{
public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int maxNum = 0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
                if (grid[i][j] == 1)
                    maxNum = max(maxNum, dfs(grid, i, j));
        return maxNum;
    }

    int dfs(vector<vector<int>> &g, int i, int j)
    {
        if (i >= g.size() || i < 0 || j >= g[0].size() || j < 0 || g[i][j] == 0)
            return 0;

        g[i][j] = 0;

        return 1 + dfs(g, i + 1, j) + dfs(g, i - 1, j) + dfs(g, i, j + 1) + dfs(g, i, j - 1);
    }
};