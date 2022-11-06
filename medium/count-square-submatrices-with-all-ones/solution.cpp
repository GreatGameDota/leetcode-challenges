class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int tot = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sq = (i > 0 && j > 0 ? (matrix[i][j] && matrix[i - 1][j] && matrix[i][j - 1] && matrix[i - 1][j - 1] ? min({matrix[i - 1][j - 1], matrix[i - 1][j], matrix[i][j - 1]}) : 0) : 0);
                matrix[i][j] += sq;
                tot += matrix[i][j];
            }
        }
        return tot;
    }
};