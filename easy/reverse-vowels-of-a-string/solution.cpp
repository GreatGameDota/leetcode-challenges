class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<char> v;
        unordered_map<char, int> m = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}, {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1}};
        for (int i = 0; i < s.length(); i++)
        {
            if (m[s[i]])
            {
                v.push_back(s[i]);
                s[i] = '*';
            }
        }
        int pointer = v.size() - 1;
        for (int i = 0; i < s.length(); i++)
            if (s[i] == '*')
                s[i] = v[pointer--];
        return s;
    }
};