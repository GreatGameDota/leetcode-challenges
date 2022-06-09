class Solution
{
public:
    int climbStairs(int n)
    {
        vector<int> memo(46, -1);
        return backtrack(0, n, memo);
    }

    int backtrack(int curr, int n, vector<int> &memo)
    {
        if (curr == n)
            return 1;
        if (curr > n)
            return 0;

        if (memo[curr] == -1)
            memo[curr] = backtrack(curr + 1, n, memo);
        if (memo[curr + 1] == -1)
            memo[curr + 1] = backtrack(curr + 2, n, memo);

        return memo[curr] + memo[curr + 1];
    }
};