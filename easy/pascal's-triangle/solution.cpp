class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        ret.push_back({1});
        numRows--;
        
        for (int i = 0; i < numRows; i++) {
            vector<int> res;
            res.push_back(1);
            for (int j = 0; j < i; j++)
                res.push_back(ret[i][j] + ret[i][j+1]);
            res.push_back(1);
            ret.push_back(res);
        }
        
        return ret;
    }
};