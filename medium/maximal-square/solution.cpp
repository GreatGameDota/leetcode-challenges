class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(2, vector<int>(m + 1, 0));

        int maxSq = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (matrix[i - 1][j - 1] == '1')
                {
                    dp[i % 2][j] = 1 + min({dp[i % 2][j - 1], dp[(i - 1) % 2][j], dp[(i - 1) % 2][j - 1]});
                    maxSq = max(maxSq, dp[i % 2][j]);
                }
                else
                    dp[i % 2][j] = 0;

        return maxSq * maxSq;
    }
};