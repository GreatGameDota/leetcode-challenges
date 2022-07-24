class NumberContainers
{
public:
    map<int, int> m;
    NumberContainers()
    {
    }

    void change(int i, int n)
    {
        m[i] = n;
    }

    int find(int number)
    {
        for (auto &p : m)
            if (p.second == number)
                return p.first;
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */