class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ret;
        vector<vector<int>> seen;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            int mid = nums[i];
            int start = 0, end = nums.size() - 1;
            while (start < end)
            {
                if (start == i)
                    start++;
                if (end == i)
                    end--;
                if (start == end || start > end)
                    break;

                if (mid + nums[start] + nums[end] > 0)
                    end--;
                else if (mid + nums[start] + nums[end] < 0)
                    start++;
                else
                {
                    if (mid >= nums[start] && mid <= nums[end])
                    {
                        bool isNew = true;
                        for (vector<int> &v : seen)
                        {
                            if (v[0] == mid)
                            {
                                if (v[1] == nums[start] && v[2] == nums[end])
                                    isNew = false;
                            }
                        }
                        if (isNew)
                        {
                            ret.push_back({nums[start], mid, nums[end]});
                            seen.push_back({mid, nums[start], nums[end]});
                        }
                        else
                            start++;
                    }
                    else
                        start++;
                }
            }
        }

        return ret;
    }
};