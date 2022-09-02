class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<int, int> freq;
        for (char &c : s)
            freq[c - 'a']++;
        int ret = 0;
        bool flag = false;
        for (auto &p : freq)
        {
            if (p.second & 1)
            {
                flag = true;
                ret += p.second - 1;
            }
            else
                ret += p.second;
        }
        return flag ? ret + 1 : ret;
    }
};