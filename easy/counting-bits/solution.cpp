class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ret;
        for (int i = 0; i <= n; i++)
            ret.push_back(__builtin_popcount(i));
        return ret;
    }
};