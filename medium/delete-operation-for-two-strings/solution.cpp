class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        vector<int> dp(word2.size() + 1, 0); // LCS of previous row
        dp[0] = word1[0] == word2[0];

        for (int i = 1; i <= word1.length(); i++)
        {
            int prev = 0;
            for (int j = 1; j <= word2.length(); j++)
            {
                int tmp = dp[j];
                dp[j] = max({dp[j], dp[j - 1], prev + (word1[i - 1] == word2[j - 1])});
                prev = tmp;
            }
        }

        return (word1.length() + word2.length()) - (dp.back() * 2);
    }
};