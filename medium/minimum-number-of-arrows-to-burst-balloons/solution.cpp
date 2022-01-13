class Solution
{
    class Balloon
    {
    public:
        int val;
        int num;
        bool start;
        Balloon(int v, int n, bool s) : val{v}, num{n}, start{s} {};
    };

    class myComparator
    {
    public:
        int operator()(const Balloon &t1, const Balloon &t2)
        {
            if (t1.val == t2.val)
                return t1.start < t2.start;
            return t1.val > t2.val;
        }
    };

public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        priority_queue<Balloon, vector<Balloon>, myComparator> minHeap;

        int i = 1;
        for (vector<int> t : points)
        {
            minHeap.push(Balloon(t[0], i, 1));
            minHeap.push(Balloon(t[1], i, 0));
            i++;
        }

        int ret = 0;
        stack<int> s;
        map<int, int> popped;
        while (!minHeap.empty())
        {
            Balloon t = minHeap.top();
            minHeap.pop();
            if (t.start)
                s.push(t.num);
            else
            {
                if (!popped[t.num])
                {
                    ret++;
                    while (!s.empty())
                    {
                        popped[s.top()] = 1;
                        s.pop();
                    }
                }
            }
        }

        return ret;
    }
};