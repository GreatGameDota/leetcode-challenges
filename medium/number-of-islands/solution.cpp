class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int size1 = grid.size(), size2 = grid[0].size();
        int ret = 0;

        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                if (grid[i][j] == '1')
                {
                    dfs(i, j, grid);
                    ret++;
                }
            }
        }
        return ret;
    }

    void dfs(int i, int j, vector<vector<char>> &grid)
    {
        if (i == grid.size() || i == -1 || j == grid[0].size() || j == -1)
            return;

        if (grid[i][j] == '1')
        {
            grid[i][j] = '0';

            dfs(i + 1, j, grid);
            dfs(i - 1, j, grid);
            dfs(i, j + 1, grid);
            dfs(i, j - 1, grid);
        }
    }
};