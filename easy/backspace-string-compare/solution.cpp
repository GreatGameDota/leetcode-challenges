class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        string st1 = "";
        string st2 = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#' && st1.length() > 0)
                st1.pop_back();
            else if (s[i] != '#')
                st1 += s[i];
        }
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == '#' && st2.length() > 0)
                st2.pop_back();
            else if (t[i] != '#')
                st2 += t[i];
        }

        if (st1.length() != st2.length())
            return false;
        for (int i = 0; i < st1.length(); i++)
            if (st1[i] != st2[i])
                return false;
        return true;
    }
};