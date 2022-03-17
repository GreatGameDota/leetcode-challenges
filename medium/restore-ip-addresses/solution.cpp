class Solution
{
public:
    vector<string> ret;
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> perm;
        backtrack(s, 0, perm);
        return ret;
    }

    void backtrack(string s, int count, vector<string> &perm)
    {
        if (count == 4 && s.length() == 0)
        {
            string str = "";
            for (int i = 0; i < 3; i++)
                str += perm[i] + ".";
            str += perm[3];
            ret.push_back(str);
            return;
        }
        else if (count == 4)
            return;

        for (int i = 1; i <= 3; i++)
        {
            if (i == s.size() + 1)
                break;
            string str = s.substr(0, i);
            int num = stoi(str);
            if (num < 256 && num > -1 && (str[0] != '0' || str.length() == 1))
            {
                perm.push_back(str);
                backtrack(s.substr(i), count + 1, perm);
                perm.pop_back();
            }
        }
    }
};