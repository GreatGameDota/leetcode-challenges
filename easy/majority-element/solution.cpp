class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int len = nums.size() / 2;
        for (int n : nums)
        {
            if (map[n] + 1 > len)
                return n;
            map[n]++;
        }
        return -1;
    }
};