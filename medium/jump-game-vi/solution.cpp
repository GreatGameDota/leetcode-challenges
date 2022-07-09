class Solution
{
public:
    int maxResult(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> dp(n + 1, INT_MIN);
        dp[n] = 0;

        priority_queue<pair<int, int>> h;
        h.push({0, n});

        for (int i = n - 1; i >= 0; i--)
        {
            while (!h.empty() && (h.top().second - i > k || (h.top().second == n && i != n - 1)))
                h.pop();

            dp[i] = h.top().first + nums[i];

            while (!h.empty() && h.top().first <= dp[i])
                h.pop();

            h.push({dp[i], i});
        }
        return dp[0];
    }
};