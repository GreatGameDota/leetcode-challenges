class Solution
{
public:
    string longestPalindrome(string s)
    {
        bool dp[1001][1001] = {};
        int n = s.length();
        int maxLength = 1;
        int start = 0;

        for (int i = n; i > 0; i--)
            for (int j = i + 1; j <= n; j++)
                if (s[i - 1] == s[j - 1] && (j - i + 1 <= 3 || dp[i + 1][j - 1]))
                {
                    dp[i][j] = 1;
                    if (j - i + 1 > maxLength)
                    {
                        maxLength = j - i + 1;
                        start = i - 1;
                    }
                }

        return s.substr(start, maxLength);
    }
};