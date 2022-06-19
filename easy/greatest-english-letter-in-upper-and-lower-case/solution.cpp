class Solution
{
public:
    string greatestLetter(string s)
    {
        unordered_map<char, int> m;
        string ret = " ";
        for (char &c : s)
        {
            m[c]++;
            if (c + 32 == tolower(c) && m[tolower(c)])
            {
                if (ret[0] < c)
                    ret[0] = c;
            }
            else if (m[c - 32])
            {
                if (ret[0] < c - 32)
                    ret[0] = c - 32;
            }
        }
        if (ret[0] == ' ')
            return "";
        return ret;
    }
};