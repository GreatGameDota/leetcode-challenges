class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] > b[1]; });
        int res = 0, cnt = 0, idx = 0;
        while (idx < boxTypes.size() && cnt < truckSize)
        {
            int am = boxTypes[idx][1];
            for (int i = 0; i < boxTypes[idx][0]; i++)
            {
                res += am;
                cnt++;
                if (cnt == truckSize)
                    break;
            }
            idx++;
        }
        return res;
    }
};