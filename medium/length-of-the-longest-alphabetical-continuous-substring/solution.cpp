class Solution
{
public:
    int longestContinuousSubstring(string s)
    {
        int ret = 0, curr = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1] + 1)
                curr++;
            else
            {
                ret = max(ret, curr);
                curr = 1;
            }
        }
        ret = max(ret, curr);
        return ret;
    }
};