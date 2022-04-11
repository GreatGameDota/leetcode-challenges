class Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {
        k %= grid.size() * grid[0].size();

        while (k >= grid[0].size())
        {
            for (int i = 1; i < grid.size(); i++)
            {
                swap(grid[0], grid[i]);
            }
            k -= grid[0].size();
        }

        for (int i = 0; i < k; i++)
        {
            int temp = grid[grid.size() - 1][grid[0].size() - 1];
            for (int j = 0; j < grid.size(); j++)
            {
                int temp2 = temp;
                temp = grid[j][grid[0].size() - 1];

                int tmp = grid[j][0];
                for (int k = 1; k < grid[0].size(); k++)
                {
                    int tmp2 = grid[j][k];
                    grid[j][k] = tmp;
                    tmp = tmp2;
                }

                grid[j][0] = temp2;
            }
        }

        return grid;
    }
};