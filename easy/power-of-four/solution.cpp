class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == INT_MIN || n == 0)
            return false;
        return ((n & (n - 1)) == 0 && (int)log2(n) % 2 == 0);
    }
};