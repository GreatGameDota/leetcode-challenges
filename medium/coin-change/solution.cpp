class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        int dp[10001];
        for (int i = 0; i <= 10000; i++)
            dp[i] = INT_MAX - 1;
        dp[0] = 0;

        for (int i = 0; i < coins.size(); i++)
            for (int j = coins[i]; j <= amount; j++)
                dp[j] = min(dp[j - coins[i]] + 1, dp[j]);

        return dp[amount] >= INT_MAX - 1 ? -1 : dp[amount];
    }
};