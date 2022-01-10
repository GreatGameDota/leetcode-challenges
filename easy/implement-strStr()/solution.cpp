class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (haystack == needle || needle == "")
            return 0;
        if (needle.length() > haystack.length())
            return -1;

        int start = 0;
        int size = needle.length();
        while (start < haystack.length() - size + 1)
        {
            if (haystack.substr(start, size) == needle)
            {
                return start;
            }
            start++;
        }
        return -1;
    }
};