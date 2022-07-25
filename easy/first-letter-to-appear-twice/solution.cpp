class Solution
{
public:
    char repeatedCharacter(string s)
    {
        int freq[26] = {};
        for (char &c : s)
        {
            freq[c - 'a']++;
            if (freq[c - 'a'] == 2)
                return c;
        }
        return -1;
    }
};