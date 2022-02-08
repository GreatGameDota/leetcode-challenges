class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), [](vector<int> &n1, vector<int> &n2)
             { return (n1[1] < n2[1]); });

        int count = -1;
        int flag = intervals[0][1];
        for (vector<int> &n : intervals)
        {
            if (flag <= n[0])
                flag = n[1];
            else
                count++;
        }

        return count;
    }
};