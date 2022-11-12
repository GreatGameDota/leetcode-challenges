class Solution {
public:
    long MOD = 1e9 + 7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> prod;
        while (n != 0) {
            prod.push_back((int)log2(n));
            n -= 1 << (int)log2(n);
        }

        for (int i = prod.size() - 2; i >= 0; i--)
            prod[i] += prod[i + 1];
            
        vector<int> ret;
        for (vector<int> &v : queries) {
            v[0] = prod.size() - v[0] - 1;
            v[1] = prod.size() - v[1] - 1;
            int p = prod[v[1]] - (v[0] == prod.size() - 1 ? 0 : prod[v[0] + 1]);
            int res = 1;
            for (int i = 0; i < p; i++) {
                res <<= 1;
                res %= MOD;
            }
            ret.push_back(res);
        }
        return ret;
    }
};