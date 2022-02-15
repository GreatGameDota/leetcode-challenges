class Solution
{
    class Pair
    {
    public:
        int x;
        int y;

        Pair(int _x, int _y) : x{_x}, y{_y} {}
    };

    class myComparator
    {
    public:
        int operator()(const Pair &p1, const Pair &p2)
        {
            return p1.y < p2.y;
        }
    };

public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        priority_queue<Pair, vector<Pair>, myComparator> heap;
        unordered_map<int, int> count;

        for (int &n : nums)
            count[n]++;

        for (auto p : count)
            heap.push(Pair(p.first, p.second));

        vector<int> ret;
        for (int i = 0; i < k; i++)
        {
            ret.push_back(heap.top().x);
            heap.pop();
        }
        return ret;
    }
};