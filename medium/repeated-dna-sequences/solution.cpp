class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        unordered_map<string, int> seen;
        vector<string> ret;
        for (int i = 0; i < s.length(); i++)
        {
            string str = s.substr(i, 10);
            if (!seen.count(str))
                seen[str] = 1;
            else if (seen[str] == 1)
            {
                seen[str] = 2;
                ret.push_back(str);
            }
        }
        return ret;
    }
};