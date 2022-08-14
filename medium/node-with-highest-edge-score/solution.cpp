class Solution
{
public:
    int edgeScore(vector<int> &edges)
    {
        vector<long long> dist(edges.size(), 0);
        for (int i = 0; i < edges.size(); i++)
        {
            dist[edges[i]] += i;
        }
        long long maxNum = -1, maxIdx = -1;
        for (int i = 0; i < dist.size(); i++)
        {
            if (dist[i] > maxNum)
            {
                maxNum = dist[i];
                maxIdx = i;
            }
        }
        return maxIdx;
    }
};