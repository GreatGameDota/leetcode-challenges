class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() < 2)
            return nums.size();

        int idx = 0;
        int i = 0;
        while (i < nums.size())
        {
            nums[idx] = nums[i];
            while (i < nums.size() && nums[i] == nums[idx])
                i++;
            idx++;
        }
        return idx;
    }
};