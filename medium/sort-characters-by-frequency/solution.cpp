class Solution
{
    class Pair
    {
    public:
        int x;
        int y;
        Pair(int _x, int _y) : x{_x}, y{_y} {};
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
    string frequencySort(string s)
    {
        priority_queue<Pair, vector<Pair>, myComparator> heap;
        unordered_map<int, int> count;

        for (char &c : s)
            count[c]++;
        for (auto &p : count)
            heap.push(Pair(p.first, p.second));

        string ret = "";
        while (!heap.empty())
        {
            Pair p = heap.top();
            heap.pop();
            for (int i = 0; i < p.y; i++)
                ret += (char)p.x;
        }

        return ret;
    }
};