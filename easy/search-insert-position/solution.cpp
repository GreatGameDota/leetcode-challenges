class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int mid = nums.size() / 2;
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end)
        {
            if (nums[mid] < target)
            {
                start = mid + 1;
                mid = (start + end) / 2;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
                mid = (start + end) / 2;
            }
            else
            {
                return mid;
            }
        }
        if (nums[mid] > target)
            return mid;
        else
            return mid + 1;
    }
};