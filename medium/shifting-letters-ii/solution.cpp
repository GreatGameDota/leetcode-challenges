class Solution
{
public:
    string shiftingLetters(string s, vector<vector<int>> &shifts)
    {
        vector<int> m(s.length(), 0);
        for (vector<int> &v : shifts)
        {
            m[v[0]] += v[2] == 0 ? -1 : 1;
            if (v[1] < s.length() - 1)
                m[v[1] + 1] += v[2] == 0 ? 1 : -1;
        }

        for (int i = 1; i < m.size(); i++)
            m[i] += m[i - 1];

        for (int i = 0; i < m.size(); i++)
        {
            int diff = m[i] % 26;
            s[i] = 'a' + (26 + (s[i] - 'a') + diff) % 26;
        }
        return s;
    }
};