class Solution
{
public:
    bool digitCount(string num)
    {
        int v[num.length()];
        for (int i = 0; i < num.length(); i++)
            v[i] = 0;
        for (char &c : num)
        {
            if (c - '0' >= num.length())
                return false;
            v[c - '0']++;
        }

        for (int i = 0; i < num.length(); i++)
            if (v[i] != num[i] - '0')
                return false;
        return true;
    }
};