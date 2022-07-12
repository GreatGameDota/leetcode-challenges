class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        deque<int> mono;
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++)
        {
            while (!mono.empty() && nums[mono.front()] < nums[i])
                mono.pop_front();
            mono.push_front(i);
            if (i >= k - 1)
            {
                while (mono.back() < i - k + 1)
                    mono.pop_back();
                ret.push_back(nums[mono.back()]);
            }
        }
        return ret;
    }
};