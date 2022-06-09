class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxNum = 0;
        int min = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min)
                min = prices[i];
            maxNum = max(maxNum, prices[i] - min);
        }
        return maxNum;
    }
};