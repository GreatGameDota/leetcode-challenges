class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
            nums.push_back(nums[i]);

        vector<int> ret(nums.size(), -1);
        stack<int> mono;
        for (int i = 0; i < nums.size(); i++)
        {
            while (!mono.empty() && nums[mono.top()] < nums[i])
            {
                ret[mono.top()] = nums[i];
                mono.pop();
            }
            mono.push(i);
        }

        for (int i = 0; i < n; i++)
            ret.pop_back();
        return ret;
    }
};