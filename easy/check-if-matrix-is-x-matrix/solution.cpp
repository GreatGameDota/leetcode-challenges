class Solution
{
public:
    bool checkXMatrix(vector<vector<int>> &grid)
    {
        for (int i = 0; i < grid.size(); i++)
        {
            if (grid[i][i] == 0)
            {
                return false;
            }
            else
                grid[i][i] = -1;

            if (grid[i][grid[0].size() - i - 1] == 0)
            {
                return false;
            }
            else
                grid[i][grid[0].size() - i - 1] = -1;
        }
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] > 0)
                    return false;
            }
        }
        return true;
    }
};