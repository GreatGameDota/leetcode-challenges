class Solution
{
public:
    int furthestBuilding(vector<int> &heights, int b, int l)
    {
        priority_queue<int, vector<int>, greater<>> heap;
        long long bricks = 0;
        for (int i = 1; i < heights.size(); i++)
        {
            long long diff = heights[i] - heights[i - 1];
            if (diff > 0)
            {
                if (l > 0 && (heap.empty() || heap.size() != l || diff > heap.top()))
                {
                    if (heap.size() == l && diff > heap.top())
                    {
                        bricks += heap.top();
                        heap.pop();
                    }
                    heap.push(diff);
                }
                else
                    bricks += diff;

                if (bricks > b)
                    return i - 1;
            }
        }
        return heights.size() - 1;
    }
};