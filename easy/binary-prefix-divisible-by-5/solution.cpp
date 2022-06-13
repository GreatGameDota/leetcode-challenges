class Solution
{
public:
    vector<bool> prefixesDivBy5(vector<int> &nums)
    {
        long long curr = 0;
        vector<bool> ret;

        for (int i = 0; i < nums.size(); i++)
        {
            curr = (2 * curr + nums[i]) % 5;
            ret.push_back(!curr);
        }
        return ret;
    }
};