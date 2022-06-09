class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        if (nums.size() < 4)
            return {};

        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int tar = target - (nums[i] + nums[j]);

                int start = j + 1, end = nums.size() - 1;
                while (start < end)
                {
                    int mid = nums[start] + nums[end];
                    if (mid == tar)
                    {
                        if (start != end)
                            res.push_back({nums[i], nums[j], nums[start], nums[end]});

                        while (start < end && nums[start] == nums[start + 1])
                        {
                            start++;
                        }
                        while (start < end && nums[end] == nums[end - 1])
                        {
                            end--;
                        }
                        start++;
                        end--;
                    }
                    else if (mid > tar)
                        end--;
                    else
                        start++;
                }
                while (j < nums.size() - 1 && nums[j] == nums[j + 1])
                {
                    j++;
                }
            }
            while (i < nums.size() - 1 && nums[i] == nums[i + 1])
            {
                i++;
            }
        }

        return res;
    }
};