class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (i > 1 && nums[i - 1] > nums[i - 2] + nums[i])
                nums[i] = nums[i - 1];
            else if (i == 1 && nums[i - 1] > nums[i])
                nums[i] = nums[i - 1];
            else if (i > 1)
                nums[i] += nums[i - 2];
        }

        return max(nums[nums.size() - 1], nums[nums.size() - 2]);
    }
};