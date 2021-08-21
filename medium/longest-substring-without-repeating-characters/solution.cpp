class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        bool arr[127] = {0};
        int seen[127] = {0};
        int count = 0;
        int max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (arr[s[i]])
                if (seen[s[i]] + 1 > count)
                    count = seen[s[i]] + 1;

            seen[s[i]] = i;
            arr[s[i]] = 1;

            if (i - count + 1 > max)
                max = i - count + 1;
        }
        return max;
    }
};