class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        string str = "";
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] > 64 && s[i] < 91) || s[i] > 96)
                str += s[i];
        }

        string rev = "";
        for (int i = str.length() - 1; i >= 0; i--)
            rev += str[i];

        string ret = "";
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] > 64 && s[i] < 91) || s[i] > 96)
            {
                ret += rev[count];
                count++;
            }
            else
                ret += s[i];
        }

        return ret;
    }
};