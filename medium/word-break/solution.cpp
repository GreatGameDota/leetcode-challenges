class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        unordered_map<string, int> m;
        for (string &s : wordDict)
            m[s] = 1;

        bool dp[301] = {};
        for (int i = 1; i <= s.length(); i++)
        {
            for (int j = i; j <= s.length(); j++)
            {
                string str = s.substr(i - 1, (j - 1) - (i - 1) + 1);
                if (m[str])
                    dp[j] = (i == 1 || dp[i - 1] ? 1 : dp[j]);
            }
        }

        return dp[s.length()];
    }
};