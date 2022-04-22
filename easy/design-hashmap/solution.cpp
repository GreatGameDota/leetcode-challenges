class MyHashMap
{
public:
    vector<vector<pair<int, int>>> map;
    const int hashSize = 200;

    MyHashMap()
    {
        map = vector<vector<pair<int, int>>>(hashSize, vector<pair<int, int>>());
    }

    void put(int key, int value)
    {
        vector<pair<int, int>> arr = map[hash(key)];
        if (arr.empty())
            map[hash(key)].push_back({key, value});
        else
        {
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i].first == key)
                {
                    map[hash(key)][i].second = value;
                    return;
                }
            }
            map[hash(key)].push_back({key, value});
        }
    }

    int get(int key)
    {
        vector<pair<int, int>> arr = map[hash(key)];
        for (auto &p : arr)
            if (p.first == key)
                return p.second;
        return -1;
    }

    void remove(int key)
    {
        vector<pair<int, int>> arr = map[hash(key)];
        for (int i = 0; i < arr.size(); i++)
            if (arr[i].first == key)
                map[hash(key)].erase(map[hash(key)].begin() + i);
    }

    int hash(int key)
    {
        return key % hashSize;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */