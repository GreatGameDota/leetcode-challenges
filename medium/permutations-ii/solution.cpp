class Solution {
public:
    vector<vector<int>> ret;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        backtrack(nums, 0);
        return ret;
    }
    
    void backtrack(vector<int> &n, int idx) {
        if (idx == n.size()) {
            ret.push_back(n);
            return;
        }
        
        backtrack(n, idx + 1);
        
        unordered_set<int> s;
        for (int i = idx + 1; i < n.size(); i++) {
            if (n[i] != n[idx] && !s.count(n[i])) {
                s.insert(n[i]);
                swap(n[i], n[idx]);
                backtrack(n, idx + 1);
                swap(n[i], n[idx]);
            }
        }
    }
};