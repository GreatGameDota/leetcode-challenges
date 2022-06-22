class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        vector<int> dp(nums.size(), INT_MIN);
        int tot = 0;
        for (int i = 3; i <= nums.size(); i++)
        {
            for (int j = i - 2; j >= 1; j--)
            {
                int diff = nums[i - 1] - nums[i - 2];
                if ((i - j + 1 == 3 && diff == nums[j] - nums[j - 1]) || diff == dp[j])
                {
                    dp[j] = diff;
                    tot++;
                }
                else
                    dp[j] = INT_MIN;
            }
        }
        return tot;
    }
};