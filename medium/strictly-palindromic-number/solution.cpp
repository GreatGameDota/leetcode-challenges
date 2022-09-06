class Solution
{
public:
    bool isStrictlyPalindromic(int n)
    {
        for (int i = 2; i <= n - 2; i++)
        {
            string s = "";
            for (int val = n; val; val /= i)
                s += (val % i) + '0';
            if (!isPalindrome(s))
                return false;
        }
        return true;
    }

    bool isPalindrome(string &s)
    {
        int start = 0, end = s.length() - 1;
        while (start <= end)
            if (s[start++] != s[end--])
                return false;
        return true;
    }
};