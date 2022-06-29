class Solution
{
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k)
    {
        int n = mat.size(), m = mat[0].size();
        int dp[101][101] = {};
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                dp[i][j] = mat[i - 1][j - 1] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];

        vector<vector<int>> ret(n, vector<int>(m, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int lowerX = max(i - k - 1, 0);
                int lowerY = max(j - k - 1, 0);
                int upperX = min(i + k, n);
                int upperY = min(j + k, m);

                ret[i - 1][j - 1] = dp[upperX][upperY] - dp[lowerX][upperY] - dp[upperX][lowerY] + dp[lowerX][lowerY];
            }
        }
        return ret;
    }
};