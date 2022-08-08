class MyQueue
{
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue()
    {
    }

    void push(int x)
    {
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }

        s1.push(x);
        int sz = s1.size();
        for (int i = 0; i < sz; i++)
        {
            int val = s1.top();
            s1.pop();
            s2.push(val);
        }
    }

    int pop()
    {
        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek()
    {
        return s2.top();
    }

    bool empty()
    {
        return s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */