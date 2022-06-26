class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int tot = accumulate(cardPoints.begin(), cardPoints.end(), 0);

        int sum = 0;
        for (int i = 0; i < cardPoints.size() - k; i++)
            sum += cardPoints[i];
        int minSum = sum;

        int start = 0, end = cardPoints.size() - k - 1;
        while (end < cardPoints.size() - 1)
        {
            sum += cardPoints[++end];
            sum -= cardPoints[start++];

            if (sum < minSum)
                minSum = sum;
        }
        return tot - minSum;
    }
};