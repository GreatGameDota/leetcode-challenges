class Solution
{
public:
    long long countBadPairs(vector<int> &nums)
    {
        long long ret = 0;
        unordered_map<int, long long> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i] - i]++;

        for (auto &p : m)
            ret += p.second * (p.second - 1) / 2;

        return nums.size() * (nums.size() - 1) / 2 - ret;
    }
};