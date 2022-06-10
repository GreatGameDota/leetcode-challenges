class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxNum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = max(nums[i], nums[i] + nums[i - 1]);
            maxNum = max(maxNum, nums[i]);
        }
        return maxNum;