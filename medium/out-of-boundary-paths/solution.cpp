class Solution
{
public:
    long long MOD = 10e8 + 7;
    int findPaths(int m, int n, int M, int i, int j)
    {
        vector<vector<vector<int>>> memo(n, vector<vector<int>>(m, vector<int>(M + 1, -1)));
        return backtrack(m, n, j, i, M, 0, memo);
    }

    int backtrack(int m, int n, int x, int y, int M, int moves, vector<vector<vector<int>>> &memo)
    {
        if (moves > M)
            return 0;
        if (x < 0 || y < 0 || x >= n || y >= m)
            return 1;

        if (memo[x][y][moves] == -1)
        {
            memo[x][y][moves] = backtrack(m, n, x + 1, y, M, moves + 1, memo);
            memo[x][y][moves] %= MOD;
            memo[x][y][moves] += backtrack(m, n, x - 1, y, M, moves + 1, memo);
            memo[x][y][moves] %= MOD;
            memo[x][y][moves] += backtrack(m, n, x, y + 1, M, moves + 1, memo);
            memo[x][y][moves] %= MOD;
            memo[x][y][moves] += backtrack(m, n, x, y - 1, M, moves + 1, memo);
            memo[x][y][moves] %= MOD;
        }

        return memo[x][y][moves];
    }
};