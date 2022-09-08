class Solution {
public:
    int maximumRows(vector<vector<int>>& matrix, int numSelect) {
        int n = matrix.size(), m = matrix[0].size();
        if (numSelect == m)
            return n;
        
        vector<int> vals(n, 0);
        for (int i = 0; i < n; i++) {
            int num = 0;
            for (int j = m - 1; j >= 0; j--)
                if (matrix[i][j])
                    num += 1 << (m - j - 1);
            vals[i] = num;
        }
        
        int ret = 0;
        for (int mask = 0; mask < 1 << m; mask++) {
            if (__builtin_popcount(mask) == numSelect) {
                int am = 0;
                for (int &i : vals)
                    if ((i | mask) == mask)
                        am++;
                ret = max(ret, am);
            }
        }
        
        return ret;
    }
};