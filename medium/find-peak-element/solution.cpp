class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1, mid;

        while (start <= end)
        {
            mid = (start + end) / 2;

            if (mid > 0 && nums[mid] > nums[mid - 1])
                if (mid < nums.size() - 1 && nums[mid] > nums[mid + 1])
                    return mid;
            if (mid == 0 && nums.size() > 1 && nums[mid] > nums[mid + 1])
                return mid;
            if (mid == nums.size() - 1 && nums.size() > 1 && nums[mid] > nums[mid - 1])
                return mid;

            if (mid > 0 && nums[mid] < nums[mid - 1])
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        return mid;
    }
};