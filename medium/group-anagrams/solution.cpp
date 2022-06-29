class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> m;
        for (string &s : strs)
        {
            string tmp = s;
            sort(s.begin(), s.end());
            m[s].push_back(tmp);
        }

        vector<vector<string>> res;
        for (auto &p : m)
            res.push_back(p.second);
        return res;
    }
};