class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ret;
        for (vector<int> &n : intervals)
        {
            if (ret.size() == 0 || ret.back()[1] < n[0])
                ret.push_back(n);
            else
                ret.back()[1] = max(ret.back()[1], n[1]);
        }
        return ret;
    }
};