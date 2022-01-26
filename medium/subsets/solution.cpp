class Solution
{
public:
    vector<vector<int>> ret;

    vector<vector<int>> subsets(vector<int> &nums)
    {
        ret.push_back(vector<int>());
        backtrack(nums, vector<int>(), 0, 1);
        return ret;
    }

    void backtrack(vector<int> &nums, vector<int> perm, int n, int size)
    {
        if (n == nums.size())
            return;

        backtrack(nums, perm, n + 1, size);

        perm.push_back(nums[n]);
        ret.push_back(perm);

        backtrack(nums, perm, n + 1, size + 1);
    }
};