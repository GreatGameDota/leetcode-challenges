class Solution
{
public:
    bool validPalindrome(string s)
    {
        return check(s, s.length());
    }

    bool check(string s, int size)
    {
        if (s.length() < 2)
            return true;
        if (s.length() == 2 && s.length() < size)
            return s[0] == s[1];

        int start = 0, end = s.length() - 1;
        while (start <= end)
        {
            if (s[start] == s[end])
            {
                start++;
                end--;
            }
            else
            {
                if (s.length() < size)
                    return false;
                string s1 = "";
                string s2 = "";
                for (int i = 0; i < s.length(); i++)
                {
                    if (i != start)
                        s1 += s[i];
                    if (i != end)
                        s2 += s[i];
                }
                
                return (check(s1, size) || check(s2, size));
            }
        }
        return true;
    }
};