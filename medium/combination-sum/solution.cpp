class Solution {
public:
    vector<vector<int>> combs;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;
        backtrack(candidates, target, 0, 0, comb);
        return combs;
    }
    
    void backtrack(vector<int>& nums, int tar, int idx, int sum, vector<int> &comb) {
        if (idx == nums.size())
            return;
        if (sum > tar)
            return;
        if (sum == tar) {
            combs.push_back(comb);
            return;
        }
        
        backtrack(nums, tar, idx + 1, sum, comb);
        comb.push_back(nums[idx]);
        sum += nums[idx];
        backtrack(nums, tar, idx, sum, comb);
        comb.pop_back();
    }
};