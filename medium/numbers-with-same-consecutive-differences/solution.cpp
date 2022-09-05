class Solution {
public:
    vector<int> ret;
    vector<int> numsSameConsecDiff(int n, int k) {
        string perm;
        for (int i = 1; i <= 9; i++) {
            perm += i + '0';
            backtrack(n, k, perm);
            perm.pop_back();
        }
        return ret;
    }
    
    void backtrack(int n, int k, string &perm) {
        if (perm.size() == n) {
            ret.push_back(stoi(perm));
            return;
        }
        
        for (int i = 0; i <= 9; i++) {
            if (abs((perm.back() - '0') - i) == k) {
                perm += i + '0';
                backtrack(n, k, perm);
                perm.pop_back();
            }
        }
    }
};