class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int n = p.length();
        int chars[26] = {};
        for (int i = 0; i < n; i++)
            chars[p[i] - 'a']++;

        vector<int> ret;
        int m[26] = {};
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i] - 'a']++;
            if (i >= n - 1)
            {
                bool valid = true;
                for (int i = 0; i < 26; i++)
                    if (m[i] != chars[i])
                        valid = false;

                if (valid)
                    ret.push_back(i - n + 1);

                m[s[i - n + 1] - 'a']--;
            }
        }
        return ret;
    }
};