class Solution
{
public:
    int maxScoreSightseeingPair(vector<int> &values)
    {
        int maxNum = 0;
        int currIdx = 0;
        for (int i = 1; i < values.size(); i++)
        {
            int val = (values[i] + values[currIdx]) - (i - currIdx);
            if (val > maxNum)
                maxNum = val;
            if (values[i] + i > values[currIdx] + currIdx)
                currIdx = i;
        }
        return maxNum;
    }
};