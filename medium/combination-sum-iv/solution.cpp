class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        vector<int> memo(target, -1);
        return backtrack(0, nums, target, memo);
    }

    int backtrack(int sum, vector<int> &nums, int tar, vector<int> &memo)
    {
        if (sum > tar)
            return 0;
        if (sum == tar)
            return 1;

        if (memo[sum] == -1)
        {
            int tot = 0;
            for (int &i : nums)
            {
                sum += i;
                if (sum < tar)
                    tot += backtrack(sum, nums, tar, memo);
                else if (sum == tar)
                    tot++;
                sum -= i;
            }
            memo[sum] = tot;
        }
        return memo[sum];
    }
};