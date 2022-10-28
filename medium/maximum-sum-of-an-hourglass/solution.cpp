class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int maxSum = INT_MIN;
        for (int i = 1; i <= n - 2; i++)
            for (int j = 1; j <= m - 2; j++)
                maxSum = max(maxSum, grid[i - 1][j - 1] + grid[i - 1][j] + grid[i - 1][j + 1] + grid[i][j] + grid[i + 1][j - 1] + grid[i + 1][j] + grid[i + 1][j + 1]);
        return maxSum;
    }
};