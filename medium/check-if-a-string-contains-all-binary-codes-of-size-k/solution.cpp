class Solution
{
public:
    unordered_map<int, bool> vals;
    bool hasAllCodes(string s, int k)
    {
        if (k >= s.length())
            return false;

        int count = 0;
        for (int i = 0; i <= s.length() - k; i++)
        {
            int sub = stoi(s.substr(i, k), nullptr, 2);
            if (!vals[sub])
            {
                vals[sub] = 1;
                if (++count == pow(2, k))
                    return true;
            }
        }
        return false;
    }
};