class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        vector<vector<int>> ret(mat.size(), vector<int>(mat[0].size(), INT_MAX));
        for (int i = 0; i < mat.size(); i++)
            for (int j = 0; j < mat[0].size(); j++)
                if (mat[i][j] == 0)
                {
                    dfs(i, j, mat, 0, ret);
                    return ret;
                }
        return ret;
    }

    void dfs(int r, int c, vector<vector<int>> &mat, int dist, vector<vector<int>> &ret)
    {
        if (r >= mat.size() || r < 0 || c >= mat[0].size() || c < 0)
            return;

        if (dist >= ret[r][c])
            return;

        if (mat[r][c] == 0)
            dist = 0;

        ret[r][c] = dist;

        dfs(r + 1, c, mat, dist + 1, ret);
        dfs(r - 1, c, mat, dist + 1, ret);
        dfs(r, c + 1, mat, dist + 1, ret);
        dfs(r, c - 1, mat, dist + 1, ret);
    }
};