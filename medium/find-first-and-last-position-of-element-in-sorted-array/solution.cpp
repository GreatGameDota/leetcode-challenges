class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int minNum = -1;
        int maxNum = -1;

        int start = 0, end = nums.size() - 1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (nums[mid] == target)
            {
                minNum = mid;
                end = mid - 1;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        end = nums.size() - 1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (nums[mid] == target)
            {
                maxNum = mid;
                start = mid + 1;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return {minNum, maxNum};
    }
};