class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.length() == 0)
            return true;
        int i1 = 0;
        for (char &c : t)
        {
            if (c == s[i1])
            {
                i1++;
                if (i1 == s.length())
                    return true;
            }
        }
        return false;
    }
};