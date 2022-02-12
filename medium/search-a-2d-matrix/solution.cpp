class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size(), m = matrix[0].size();
        int mid;
        int idx1 = 0, idx2 = n * m - 1;

        while (idx1 <= idx2)
        {
            int mid1 = (idx1 + idx2) / 2;
            mid = matrix[mid1 / m][mid1 % m];

            if (mid == target)
                return true;

            if (mid < target)
                idx1 = mid1 + 1;
            else
                idx2 = mid1 - 1;
        }

        return false;
    }
};