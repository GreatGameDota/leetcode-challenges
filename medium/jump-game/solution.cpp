class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        vector<int> memo(nums.size() + 1, -1);
        return backtrack(0, nums, memo);
    }

    bool backtrack(int idx, vector<int> &n, vector<int> &memo)
    {
        if (idx == n.size() - 1)
            return true;
        if (idx >= n.size())
            return false;

        for (int i = 1; i <= n[idx]; i++)
        {
            if (memo[idx + i] == -1)
                memo[idx + i] = backtrack(idx + i, n, memo);
            if (memo[idx + i])
                return true;
        }
        return false;
    }
};