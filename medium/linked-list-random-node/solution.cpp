class Trip
{
public:
    int day;
    int people;
    bool start;
    Trip(int d, int p, bool s) : day{d}, people{p}, start{s} {};
};

class myComparator
{
public:
    int operator()(const Trip &t1, const Trip &t2)
    {
        if (t1.day == t2.day)
            return t1.start > t2.start;
        return t1.day > t2.day;
    }
};

class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        priority_queue<Trip, vector<Trip>, myComparator> minHeap;

        for (vector<int> t : trips)
        {
            minHeap.push(Trip(t[1], t[0], 1));
            minHeap.push(Trip(t[2], t[0], 0));
        }

        int cap = 0;
        while (!minHeap.empty())
        {
            Trip t = minHeap.top();
            minHeap.pop();

            if (t.start)
                cap += t.people;
            else
                cap -= t.people;

            if (cap > capacity)
                return false;
        }

        return true;
    }
};