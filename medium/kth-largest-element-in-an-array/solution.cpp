class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int, vector<int>, less<int>> heap;
        for (int &n : nums)
            heap.push(n);
        int val;
        for (int i = 0; i < k; i++)
        {
            val = heap.top();
            heap.pop();
        }
        return val;
    }
};