class Solution
{
public:
    bool ret = false;
    bool seen[201][10001] = {};
    bool canPartition(vector<int> &nums)
    {
        int all = accumulate(begin(nums), end(nums), 0);
        backtrack(nums, 0, 0, all);
        return ret;
    }

    void backtrack(vector<int> &n, int idx, int sum, int all)
    {
        if (idx == n.size() || sum > all - sum || ret || seen[idx][sum])
        {
            if (sum == all - sum)
                ret = true;
            return;
        }
        seen[idx][sum] = 1;
        backtrack(n, idx + 1, sum, all);
        backtrack(n, idx + 1, sum + n[idx], all);
    }
};