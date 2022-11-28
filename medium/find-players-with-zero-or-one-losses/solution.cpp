class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> loses;
        for (vector<int> &v : matches) {
            if (!loses.count(v[0]))
                loses[v[0]] = 0;
            loses[v[1]]++;
        }
        vector<vector<int>> ret;
        ret.push_back({});
        ret.push_back({});
        for (auto &p : loses) {
            if (p.second == 0)
                ret[0].push_back(p.first);
            if (p.second == 1)
                ret[1].push_back(p.first);
        }
        return ret;
    }
};