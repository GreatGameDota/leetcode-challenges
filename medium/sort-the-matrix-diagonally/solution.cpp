class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        int n = mat.size(), m = mat[0].size();

        vector<vector<int>> res(n + (m - 1), vector<int>());
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                res[(i - j) + (m - 1)].push_back(mat[i][j]);

        for (vector<int> &v : res)
            sort(begin(v), end(v), greater<>());

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                mat[i][j] = res[(i - j) + (m - 1)].back();
                res[(i - j) + (m - 1)].pop_back();
            }

        return mat;
    }
};