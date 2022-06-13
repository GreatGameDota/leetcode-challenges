class Solution
{
public:
    int minPathCost(vector<vector<int>> &grid, vector<vector<int>> &moveCost)
    {
        vector<int> dp = grid.back();

        for (int i = grid.size() - 2; i >= 0; i--)
        { // All rows starting from 2nd to last and going backwards
            vector<int> tmp = dp;
            for (int j = 0; j < grid[i].size(); j++)
            { // Current Row
                int minNum = INT_MAX;
                for (int k = 0; k < grid[i].size(); k++) // Previous row (index + 1)
                    minNum = min(minNum, tmp[k] + moveCost[grid[i][j]][k]);
                dp[j] = grid[i][j] + minNum;
            }
        }

        return *min_element(dp.begin(), dp.end());
    }
};