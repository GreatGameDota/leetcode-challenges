class Solution
{
public:
    int nthUglyNumber(int n)
    {
        int dp[1690] = {1};
        int l1 = 0, l2 = 0, l3 = 0;
        for (int i = 1; i < n; i++)
        {
            int n1 = dp[l1] * 2, n2 = dp[l2] * 3, n3 = dp[l3] * 5;
            dp[i] = min({n1, n2, n3});
            if (dp[i] == n1)
                l1++;
            if (dp[i] == n2)
                l2++;
            if (dp[i] == n3)
                l3++;
        }
        return dp[n - 1];
    }
};