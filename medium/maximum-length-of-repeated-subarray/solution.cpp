class Solution
{
public:
    int dp[2][1001] = {};
    int findLength(vector<int> &nums1, vector<int> &nums2)
    {
        // dp[i][j] is longest common subarray ending at nums1[i] and nums2[j]
        int n = nums1.size(), m = nums2.size();

        int ret = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                dp[i % 2][j] = nums1[i - 1] == nums2[j - 1] ? dp[(i - 1) % 2][j - 1] + 1 : 0;
                ret = max(ret, dp[i % 2][j]);
            }
        }

        return ret;
    }
};