class Solution
{
public:
    int removePalindromeSub(string s)
    {
        int i1 = 0, i2 = s.length() - 1;
        while (i1 <= i2)
        {
            if (s[i1] == s[i2])
            {
                i1++;
                i2--;
            }
            else
                return 2;
        }
        return 1;
    }
};