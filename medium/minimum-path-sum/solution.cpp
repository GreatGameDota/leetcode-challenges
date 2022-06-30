class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> dp(2, vector<int>(m + 1, INT_MAX));
        dp[0][1] = 0;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                dp[i % 2][j] = grid[i - 1][j - 1] + min(dp[(i - 1) % 2][j], dp[i % 2][j - 1]);

        return dp[n % 2][m];
    }
};