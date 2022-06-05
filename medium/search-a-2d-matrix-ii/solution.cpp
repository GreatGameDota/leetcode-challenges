class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int r = 0, c = matrix[0].size() - 1;
        while (r < matrix.size() && c >= 0)
        {
            int mid = matrix[r][c];
            if (mid == target)
                return true;
            else if (mid > target)
                c--;
            else
                r++;
        }
        return false;
    }
};