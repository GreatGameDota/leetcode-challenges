class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int m[127] = {};
        int maxSub = 0, len = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (m[s[i]] >= i - len)
                len -= m[s[i]] - (i - len);
            len++;
            m[s[i]] = i + 1;
            maxSub = max(maxSub, len);
        }
        return maxSub;
    }
};