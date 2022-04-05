class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k %= nums.size();
        stack<int> ret;
        for (int i = 0; i < k; i++)
        {
            int temp;
            ret.push(nums.back());
            nums.pop_back();
        }
        
        vector<int> res;
        while (!ret.empty())
        {
            res.push_back(ret.top());
            ret.pop();
        }

        for (int i = 0; i < nums.size(); i++)
            res.push_back(nums[i]);
        nums = res;
    }
};