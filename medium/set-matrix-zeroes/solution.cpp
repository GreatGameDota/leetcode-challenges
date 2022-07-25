class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = -1, col = -1;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    if (row == -1)
                    {
                        row = i;
                        col = j;
                    }
                    else
                    {
                        matrix[row][j] = 0;
                        matrix[i][col] = 0;
                    }
                }
            }
        }

        if (row != -1)
        {
            for (int i = 0; i < matrix[0].size(); i++)
                if (i != col && matrix[row][i] == 0)
                    for (int j = 0; j < matrix.size(); j++)
                        matrix[j][i] = 0;

            for (int i = 0; i < matrix.size(); i++)
                if (i != row && matrix[i][col] == 0)
                    for (int j = 0; j < matrix[0].size(); j++)
                        matrix[i][j] = 0;

            for (int i = 0; i < matrix.size(); i++)
                matrix[i][col] = 0;
            for (int i = 0; i < matrix[0].size(); i++)
                matrix[row][i] = 0;
        }
    }
};