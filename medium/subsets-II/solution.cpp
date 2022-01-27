class Solution
{
public:
    vector<vector<int>> ret;

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        ret.push_back(vector<int>());
        backtrack(nums, vector<int>(), 0, 1);
        return ret;
    }

    void backtrack(vector<int> &nums, vector<int> perm, int n, int size)
    {
        if (n == nums.size())
            return;

        int i = n + 1;
        while (i < nums.size() && nums[i] == nums[n])
            i++;
        backtrack(nums, perm, i, size);

        perm.push_back(nums[n]);
        ret.push_back(perm);

        backtrack(nums, perm, n + 1, size + 1);
    }
};