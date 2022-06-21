class Solution
{
public:
    int countSubstrings(string s)
    {
        int n = s.length();
        int dp[2][1001] = {};
        int tot = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j >= 1; j--)
            {
                if (s[j - 1] == s[i - 1] && (i - j + 1 <= 3 || dp[(i - 1) % 2][j + 1]))
                {
                    dp[i % 2][j] = 1;
                    tot++;
                }
                else
                    dp[i % 2][j] = 0;
            }
        }

        return tot;
    }
};