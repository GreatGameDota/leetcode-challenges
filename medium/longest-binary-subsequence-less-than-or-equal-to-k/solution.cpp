class Solution
{
public:
    int longestSubsequence(string s, int k)
    {
        long long val = 0;
        int sz = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '1' && val + pow(2, s.length() - i - 1) <= k)
            {
                val += pow(2, s.length() - i - 1);
                sz++;
            }
            else if (s[i] == '0')
                sz++;
        }
        return sz;
    }
};