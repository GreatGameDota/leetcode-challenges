class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        vector<vector<int>> temp1(grid.size(), vector<int>(grid[0].size() - 2, 0));

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j <= grid[0].size() - 3; j++)
            {
                int maxNum = 0;
                for (int k = 0; k < 3; k++)
                {
                    maxNum = max(maxNum, grid[i][j + k]);
                }
                temp1[i][j] = maxNum;
            }
        }

        vector<vector<int>> ret(temp1.size() - 2, vector<int>(temp1[0].size(), 0));
        for (int j = 0; j < temp1[0].size(); j++)
        {
            for (int i = 0; i <= temp1.size() - 3; i++)
            {
                int maxNum = 0;
                for (int k = 0; k < 3; k++)
                {
                    maxNum = max(maxNum, temp1[i + k][j]);
                }
                ret[i][j] = maxNum;
            }
        }
        return ret;
    }
};