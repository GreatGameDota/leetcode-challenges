class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        if (nums.size() == 0)
            return 0;

        int idx = 0;
        int i = 0;
        while (i < nums.size())
        {
            while (i < nums.size() && nums[i] == val)
                i++;
            if (i == nums.size())
                break;
            nums[idx] = nums[i];
            idx++;
            i++;
        }
        return idx;
    }
};