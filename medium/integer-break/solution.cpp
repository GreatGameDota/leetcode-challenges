class Solution
{
public:
    int integerBreak(int n)
    {
        if (n <= 3)
            return n - 1;
        if (n == 4)
            return 4;

        int threes = (n - 2) / 3;
        return pow(3, threes) * (n - 3 * threes);
    }
};