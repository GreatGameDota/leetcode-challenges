class Solution
{
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>> &firstList, vector<vector<int>> &secondList)
    {
        for (vector<int> n : secondList)
            firstList.push_back(n);
        sort(firstList.begin(), firstList.end());

        vector<vector<int>> merge;
        vector<vector<int>> ret;

        for (vector<int> &n : firstList)
        {
            if (merge.size() == 0 || merge.back()[1] < n[0])
                merge.push_back(n);
            else
            {
                ret.push_back({max(n[0], merge.back()[0]), min(n[1], merge.back()[1])});
                merge.back() = {merge.back()[0], max(merge.back()[1], n[1])};
            }
        }

        return ret;
    }
};