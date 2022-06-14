class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        vector<int> dp(text2.size() + 1, 0); // LCS of previous row
        dp[0] = text1[0] == text2[0];

        for (int i = 1; i <= text1.length(); i++)
        {
            int prev = 0;
            for (int j = 1; j <= text2.length(); j++)
            {
                int tmp = dp[j];
                // dp[j] = dp[i - 1][j], dp[j - 1] = dp[i][j - 1], prev = dp[i - 1][j - 1]
                dp[j] = max({dp[j], dp[j - 1], prev + (text1[i - 1] == text2[j - 1])});
                prev = tmp;
            }
        }
        return dp.back();
    }
};