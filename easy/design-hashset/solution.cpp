class MyHashSet {
public:
    vector<vector<int>> set;
    const int hashSize = 200;
    
    MyHashSet() {
        set = vector<vector<int>>(hashSize, vector<int>());
    }
    
    void add(int key) {
        set[hash(key)].push_back(key);
    }
    
    void remove(int key) {
        vector<int> arr = set[hash(key)];
        
        for (int i = 0; i < arr.size(); i++)
            if (arr[i] == key)
                set[hash(key)][i] = -1;
    }
    
    bool contains(int key) {
        vector<int> arr = set[hash(key)];
        for (int &i : arr)
            if (i == key)
                return true;
        return false;
    }
    
    int hash(int key) {
        return key % hashSize;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */