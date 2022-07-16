class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<int, int> seen;
        for (char &ch : magazine)
            seen[ch - 'a']++;

        for (char &ch : ransomNote)
            if (seen[ch - 'a'])
                seen[ch - 'a']--;
            else
                return false;

        return true;
    }
};