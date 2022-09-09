class TimeMap {
public:
    unordered_map<string, unordered_map<int, string>> m;
    unordered_map<string, vector<int>> v;
    
    void set(string key, string value, int timestamp) {
        m[key][timestamp] = value;
        v[key].push_back(timestamp);
    }
    
    string get(string key, int timestamp) {
        if (v[key].size() == 0)
            return "";
        
        auto p = upper_bound(begin(v[key]), end(v[key]), timestamp);
        
        if (p == begin(v[key]))
            return "";
        return m[key][*(--p)];
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */