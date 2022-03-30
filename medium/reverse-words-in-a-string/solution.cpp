class Solution
{
public:
    string reverseWords(string s)
    {
        int length = 0, n = s.length();

        while (s[0] == ' ')
        {
            s = s.substr(1, n);
            n--;
        }
        while (s[n - 1] == ' ')
        {
            s = s.substr(0, n - 1);
            n--;
        }
        string ret = "";

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
            {
                if (ret != "")
                    ret += " ";
                ret += s.substr(i + 1, (n - ret.length()) - (i + 1));

                while (s[i] == ' ')
                {
                    i--;
                    n--;
                }
                n++;
                i++;
            }
        }
        if (ret != "")
            ret += " ";
        ret += s.substr(0, n - ret.length());
        return ret;
    }
};