class Solution
{
public:
    string swap(string &s, int k)
    {
        char c;
        string ret = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (i == k)
                c = s[i];
            else
                ret += s[i];
        }
        ret += c;
        return ret;
    }

    string orderlyQueue(string s, int k)
    {
        if (k == 1)
        {
            string ret = s;
            string ori = s;

            string s2 = swap(s, 0);
            while (s2 != ori)
            {
                if (ret > s2)
                    ret = s2;
                s2 = swap(s2, 0);
            }

            return ret;
        }
        else
        {
            sort(s.begin(), s.end());
            return s;
        }
    }
};