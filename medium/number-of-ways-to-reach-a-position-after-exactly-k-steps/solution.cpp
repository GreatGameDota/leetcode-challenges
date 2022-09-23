class Solution
{
public:
    int MOD = 1e9 + 7;
    long long memo[3001][1001];
    int numberOfWays(int startPos, int endPos, int k)
    {
        memset(memo, -1, sizeof(memo));
        return backtrack(startPos, endPos, k, startPos, 0) % MOD;
    }

    long long backtrack(int s, int e, int k, int curr, int steps)
    {
        if (steps > k)
            return 0;
        if (steps == k && curr == e)
            return 1;

        if (memo[curr + 1000][steps] == -1)
            memo[curr + 1000][steps] = (backtrack(s, e, k, curr + 1, steps + 1) + backtrack(s, e, k, curr - 1, steps + 1)) % MOD;
        return memo[curr + 1000][steps];
    }
};