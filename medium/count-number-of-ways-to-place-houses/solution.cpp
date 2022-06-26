class Solution
{
public:
    int countHousePlacements(int n)
    {
        int prev2 = 0, prev = 1, mod = 1000000007;
        for (int i = 2; i <= n + 2; i++)
        {
            int tmp = prev;
            prev += prev2;
            prev %= mod;
            prev2 = tmp;
        }
        return ((long long)prev * prev) % mod;
    }
};