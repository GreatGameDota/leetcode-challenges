class Solution
{
public:
    bool valid(string &w1, string &w2)
    {
        int j = 0;
        for (char &c : w2)
            if (c == w1[j])
            {
                j++;
                if (j == w1.length())
                    return true;
            }
        return false;
    }

    int longestStrChain(vector<string> &words)
    {
        sort(words.begin(), words.end(), [](const string &a, const string &b)
             { return a.length() < b.length(); });

        int dp[1001] = {};
        int maxNum = 1;
        int n = words.size();
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
                if (words[j - 1].length() - words[i - 1].length() == 1 && valid(words[i - 1], words[j - 1]))
                    dp[j] = max(dp[j], dp[i] + 1);
            maxNum = max(maxNum, dp[i] + 1);
        }

        return maxNum;
    }
};