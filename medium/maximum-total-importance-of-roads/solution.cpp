class Solution
{
public:
    long long maximumImportance(int n, vector<vector<int>> &roads)
    {
        vector<int> d(n, 0);
        for (vector<int> &r : roads)
        {
            d[r[0]]++;
            d[r[1]]++;
        }

        priority_queue<int> heap;
        for (int &i : d)
            heap.push(i);

        long long tot = 0;
        for (long long i = n; i > 0; i--)
        {
            tot += i * heap.top();
            heap.pop();
        }

        return tot;
    }
};