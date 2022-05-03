class NumMatrix
{
public:
    vector<vector<int>> nums;
    NumMatrix(vector<vector<int>> &matrix)
    {
        for (auto &v : matrix)
        {
            for (int i = 1; i < v.size(); i++)
            {
                v[i] += v[i - 1];
            }
            nums.push_back(v);
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int sum = 0;
        for (int i = row1; i <= row2; i++)
        {
            if (col1 == 0)
                sum += nums[i][col2];
            else
                sum += nums[i][col2] - nums[i][col1 - 1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */