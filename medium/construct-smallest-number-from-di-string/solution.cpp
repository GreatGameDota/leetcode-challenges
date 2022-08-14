class Solution
{
public:
    string ret;
    string smallestNumber(string pattern)
    {
        string perm = "";
        vector<int> digits(9, 0);
        for (int i = 1; i <= 9; i++)
        {
            perm += to_string(i);
            digits[i - 1] = 1;
            backtrack(pattern, perm, digits);
            perm.pop_back();
            digits[i - 1] = 0;
        }
        return ret;
    }

    void backtrack(string &pat, string &perm, vector<int> &digits)
    {
        if (perm.size() == pat.size() + 1)
        {
            if (ret.length() == 0 || perm < ret)
                ret = perm;
            return;
        }
        if (pat[perm.size() - 1] == 'I')
        {
            for (int i = (perm.back() - '0') + 1; i <= 9; i++)
            {
                if (digits[i - 1] == 0)
                {
                    perm += to_string(i);
                    digits[i - 1] = 1;
                    backtrack(pat, perm, digits);
                    perm.pop_back();
                    digits[i - 1] = 0;
                }
            }
        }
        else
        {
            for (int i = 1; i < (perm.back() - '0'); i++)
            {
                if (digits[i - 1] == 0)
                {
                    perm += to_string(i);
                    digits[i - 1] = 1;
                    backtrack(pat, perm, digits);
                    perm.pop_back();
                    digits[i - 1] = 0;
                }
            }
        }
    }
};