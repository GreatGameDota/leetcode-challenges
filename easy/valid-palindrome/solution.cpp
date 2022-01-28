class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.size() - 1;

        while (start <= end)
        {
            while (start < s.size() && !isalpha(s[start]) && !isdigit(s[start]))
                start++;
            while (end > -1 && !isalpha(s[end]) && !isdigit(s[end]))
                end--;

            if (start == s.size() || end == 0)
                break;
            else
            {
                if (tolower(s[start]) != tolower(s[end]))
                    return false;

                start++;
                end--;
            }
        }
        return true;
    }
};