class Solution
{
public:
    vector<vector<int>> combs;
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());

        vector<int> comb;
        backtrack(candidates, target, 0, 0, comb);
        return combs;
    }

    void backtrack(vector<int> &nums, int tar, int idx, int sum, vector<int> &comb)
    {
        if (sum == tar)
        {
            combs.push_back(comb);
            return;
        }
        if (idx == nums.size() || sum > tar)
            return;
        int num = nums[idx];

        int i = idx + 1;
        while (i < nums.size() && nums[i] == num)
            i++;
        backtrack(nums, tar, i, sum, comb);

        comb.push_back(num);
        sum += num;
        backtrack(nums, tar, idx + 1, sum, comb);
        comb.pop_back();
    }
};