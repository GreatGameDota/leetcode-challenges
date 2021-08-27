class Solution
{
public:
    int findLUSlength(vector<string> &strs)
    {
        int max = -1;
        string s;
        int count = 1;

        for (int i = 0; i < strs.size(); i++)
        {
            s = strs[i];
            bool uncom = true;
            for (int j = 0; j < strs.size(); j++)
            {
                if (j != i)
                    if (isSubsequence(strs[j], s))
                        uncom = false;
            }

            if (uncom)
            {
                int size = s.length();
                if (size > max)
                    max = s.length();
            }
        }

        return max;
    }

    bool isSubsequence(string base, string s)
    {
        if (s.length() > base.length())
            return false;
        if (base == s)
            return true;

        vector<int> seen;
        for (int i = 0; i < s.length(); i++)
            seen.push_back(-1);

        for (int i = 0; i < s.length(); i++)
        {
            bool found = false;
            for (int j = 0; j < base.length(); j++)
            {
                if (s[i] == base[j] && seen[i] == -1)
                {
                    if (i > 0)
                    {
                        if (j > seen[i - 1])
                        {
                            found = true;
                            seen[i] = j;
                            break;
                        }
                    }
                    else
                    {
                        found = true;
                        seen[i] = j;
                        break;
                    }
                }
            }
            if (!found)
                return false;
        }

        return true;
    }
};