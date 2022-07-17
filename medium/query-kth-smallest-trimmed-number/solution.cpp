class Solution
{
public:
    vector<int> smallestTrimmedNumbers(vector<string> &n, vector<vector<int>> &q)
    {
        vector<int> ret;
        for (vector<int> &p : q)
        {
            priority_queue<pair<string, int>> h;

            for (int i = 0; i < n.size(); i++)
            {
                h.push({n[i].substr(n[i].size() - p[1], p[1]), i});
                if (h.size() > p[0])
                    h.pop();
            }

            ret.push_back(h.top().second);
        }
        return ret;
    }
};