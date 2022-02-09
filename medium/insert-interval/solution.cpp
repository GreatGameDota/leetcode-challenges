class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        if (intervals.empty())
        {
            intervals.push_back(newInterval);
            return intervals;
        }
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        for (vector<int> &n : intervals)
        {
            if (merged.empty() || merged.back()[1] < n[0])
                merged.push_back(n);
            else
                merged.back()[1] = max(merged.back()[1], n[1]);
        }
        return merged;
    }
};