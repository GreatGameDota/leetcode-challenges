class MinStack
{
public:
    stack<pair<int, int>> s;
    int minVal;
    MinStack()
    {
        minVal = INT_MAX;
    }

    void push(int val)
    {
        s.push({val, minVal});
        if (val < minVal)
            minVal = val;
    }

    void pop()
    {
        if (s.top().first == minVal)
            minVal = s.top().second;
        s.pop();
        if (s.empty())
            minVal = INT_MAX;
    }

    int top()
    {
        return s.top().first;
    }

    int getMin()
    {
        return min(s.top().first, s.top().second);
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */