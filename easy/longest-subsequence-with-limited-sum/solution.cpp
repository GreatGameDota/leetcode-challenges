class Solution
{
public:
    vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
    {
        sort(begin(nums), end(nums));

        vector<int> ret;
        for (int &i : queries)
        {
            int sum = 0, sz = 0;
            while (sz < nums.size() && nums[sz] + sum <= i)
                sum += nums[sz++];
            ret.push_back(sz);
        }
        return ret;
    }
};