class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        vector<vector<int>> dp(2, vector<int>(n, 0));
        dp[(n - 1) % 2] = matrix[n - 1];

        for (int i = n - 2; i >= 0; i--)
            for (int j = 0; j < n; j++)
                dp[i % 2][j] = matrix[i][j] + min({dp[(i + 1) % 2][max(0, j - 1)], dp[(i + 1) % 2][j], dp[(i + 1) % 2][min(n - 1, j + 1)]});

        return *min_element(dp[0].begin(), dp[0].end());
    }
};