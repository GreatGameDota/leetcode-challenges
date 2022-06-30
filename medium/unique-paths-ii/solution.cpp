class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
        vector<int> dp(m + 1, 0);
        if (obstacleGrid[0][0] != 1)
            dp[1] = 1;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (obstacleGrid[i - 1][j - 1] == 0)
                    dp[j] += dp[j - 1];
                else
                    dp[j] = 0;

        return dp.back();
    }
};