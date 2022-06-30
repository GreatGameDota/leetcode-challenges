class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int tar = nums[nums.size() / 2];
        int res = 0;
        for (int &i : nums)
            res += abs(tar - i);
        return res;
    }
};