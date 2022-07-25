class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int n = grid.size();
        unordered_map<string, int> m;
        for (vector<int> &r : grid)
        {
            string s = "";
            for (int i = 0; i < n; i++)
                s += to_string(r[i]) + "-";
            m[s]++;
        }

        int ret = 0;
        for (int i = 0; i < n; i++)
        {
            string s = "";
            for (int j = 0; j < n; j++)
                s += to_string(grid[j][i]) + "-";
            if (m.count(s))
                ret += m[s];
        }
        return ret;
    }
};