class Solution
{
public:
    int getMaximumGenerated(int n)
    {
        if (n == 0)
            return 0;

        int dp[101] = {0, 1};

        int maxNum = 1;
        for (int i = 1; i < n; i++)
        {
            dp[2 * i] = dp[i];
            maxNum = max(maxNum, dp[2 * i]);
            if (2 * i >= n)
                break;

            dp[2 * i + 1] = dp[i] + dp[i + 1];
            maxNum = max(maxNum, dp[2 * i + 1]);
            if (2 * i + 1 >= n)
                break;
        }

        return maxNum;
    }
};