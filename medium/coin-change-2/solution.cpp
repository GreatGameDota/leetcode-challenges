class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {
        vector<int> dp(amount + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= coins.size(); i++)
            for (int j = coins[i - 1]; j <= amount; j++)
                dp[j] += dp[j - coins[i - 1]];

        return dp.back();
    }
};