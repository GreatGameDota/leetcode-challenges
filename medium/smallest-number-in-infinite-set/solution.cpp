class SmallestInfiniteSet
{
public:
    int ptr = 1;
    priority_queue<int, vector<int>, greater<>> h;

    int popSmallest()
    {
        if (h.empty())
            return ptr++;

        int val = h.top();
        while (!h.empty() && h.top() == val)
            h.pop();
        return val;
    }

    void addBack(int num)
    {
        if (num < ptr)
            h.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */