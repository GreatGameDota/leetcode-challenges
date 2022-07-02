class Solution
{
public:
    int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> res;
        traverse(matrix, res, 0, 0, 0);
        return res;
    }

    void traverse(vector<vector<int>> &matrix, vector<int> &res, int i, int j, int direction)
    {
        if (!(i > -1 && j > -1 && i < matrix.size() && j < matrix[0].size()))
            return;

        while (i > -1 && j > -1 && i < matrix.size() && j < matrix[0].size())
        {
            if (matrix[i][j] == -101)
                break;
            res.push_back(matrix[i][j]);
            matrix[i][j] = -101;
            i += dir[direction][0];
            j += dir[direction][1];
        }

        if (i > -1 && j > -1 && i < matrix.size() && j < matrix[0].size())
            if (matrix[i][j] == -101)
            {
                i -= dir[direction][0];
                j -= dir[direction][1];
            }

        direction = (direction + 1) % 4;
        i = max(0, min(i, (int)matrix.size() - 1)) + dir[direction][0];
        j = max(0, min(j, (int)matrix[0].size() - 1)) + dir[direction][1];

        if (i > -1 && j > -1 && i < matrix.size() && j < matrix[0].size())
            if (matrix[i][j] == -101)
                return;

        traverse(matrix, res, i, j, direction);
    }
};