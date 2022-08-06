class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {
        int m[26] = {};
        for (string &s : words2)
        {
            int m_[26] = {};
            for (char &c : s)
                m_[c - 'a']++;

            for (int i = 0; i < 26; i++)
                m[i] = max(m[i], m_[i]);
        }

        vector<string> ret;
        for (string &s : words1)
        {
            int m_[26] = {};
            for (char &c : s)
                if (m[c - 'a'])
                    m_[c - 'a']++;

            int i;
            for (i = 0; i < 26; i++)
                if (m_[i] < m[i])
                    break;

            if (i != 26)
                continue;

            ret.push_back(s);
        }
        return ret;
    }
};