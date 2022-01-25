class Solution
{
public:
    vector<string> ret;
    unordered_map<string, int> seen;

    vector<string> letterCasePermutation(string s)
    {
        ret.push_back(s);
        seen[s] = 1;

        search(s, 0);
        return ret;
    }

    void search(string s, int n)
    {
        if (n == s.size())
            return;

        search(s, n + 1);

        if (s[n] >= 97 && s[n] <= 122)
            s[n] -= 32;
        else if (s[n] >= 65 && s[n] <= 90)
            s[n] += 32;

        if (!seen[s])
        {
            ret.push_back(s);
            seen[s] = 1;
        }
        search(s, n + 1);
    }
};