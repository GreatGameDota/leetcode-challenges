class Solution
{
public:
    int fib(int n)
    {
        vector<int> memo(n, -1);
        return _fib(n, memo);
    }

    int _fib(int n, vector<int> &memo)
    {
        if (n == 1)
            return 1;
        if (n == 0)
            return 0;

        if (memo[n - 1] == -1)
            memo[n - 1] = _fib(n - 1, memo) + _fib(n - 2, memo);
        return memo[n - 1];
    }
};