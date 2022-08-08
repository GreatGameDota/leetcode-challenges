class MyCircularQueue
{
public:
    vector<int> v;
    int k;
    MyCircularQueue(int k)
    {
        this->k = k;
    }

    bool enQueue(int value)
    {
        if (v.size() == k)
            return false;

        v.push_back(value);
        return true;
    }

    bool deQueue()
    {
        if (v.size() == 0)
            return false;

        v.erase(v.begin());
        return true;
    }

    int Front()
    {
        if (v.size() == 0)
            return -1;
        return v[0];
    }

    int Rear()
    {
        if (v.size() == 0)
            return -1;
        return v.back();
    }

    bool isEmpty()
    {
        return v.size() == 0;
    }

    bool isFull()
    {
        return v.size() == k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */