class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int count = 0;
        int ret = 0;
        for (char &c : s)
        {
            if (count == 0)
                ret++;
            if (c == 'R')
                count++;
            else
                count--;
        }
        return ret;
    }
};