class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int ret;
        int min = INT_MAX;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            int first = nums[i];
            int start = 0, end = nums.size() - 1;
            while (start < end)
            {
                if (start == i)
                    start++;
                if (end == i)
                    end--;
                if (start == end || start > end)
                    break;

                if (abs(target - (first + nums[start] + nums[end])) < min)
                {
                    ret = first + nums[start] + nums[end];
                    min = abs(target - (first + nums[start] + nums[end]));
                }

                if (first + nums[start] + nums[end] > target)
                    end--;
                else if (first + nums[start] + nums[end] < target)
                    start++;
                else
                    return target;
            }
        }

        return ret;
    }
};