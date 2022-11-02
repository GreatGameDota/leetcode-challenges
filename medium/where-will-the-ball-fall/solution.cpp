class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int dp[102][101] = {};
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < m; i++)
            dp[1][i + 1] = i + 1;
        
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (grid[i - 1][j - 1] == 1) { // Current goes right
                    if (j > 1 && grid[i - 2][j - 2] == 1) { // Top left neighbor goes right
                        if (dp[i - 1][j - 1] && grid[i - 2][j - 1] == 1)
                            dp[i][j] = dp[i - 1][j - 1];
                    }
                    if (j < m && grid[i - 2][j] == -1) { // Top right neighbor goes left
                        if (!dp[i][j] && dp[i - 1][j + 1] && grid[i - 2][j - 1] == -1)
                            dp[i][j] = dp[i - 1][j + 1];
                    }
                } else { // Current goes left
                    if (j > 1 && grid[i - 2][j - 2] == 1) { // Top left neighbor goes right
                        if (dp[i - 1][j - 1] && grid[i - 2][j - 1] == 1)
                            dp[i][j] = dp[i - 1][j - 1];
                    }
                    if (j < m && grid[i - 2][j] == -1) { // Top right neighbor goes left
                        if (!dp[i][j] && dp[i - 1][j + 1] && grid[i - 2][j - 1] == -1)
                            dp[i][j] = dp[i - 1][j + 1];
                    }
                }
            }
        }
        
        for (int i = 1; i <= m; i++) {
            if (dp[n][i]) {
                if (grid[n - 1][i - 1] == 1) {
                    if (i < m && grid[n - 1][i] == 1)
                        dp[n + 1][i + 1] = dp[n][i];
                } else {
                    if (i > 1 && grid[n - 1][i - 2] == -1)
                        dp[n + 1][i - 1] = dp[n][i];
                }
            }
        }
        
        vector<int> v(m, -1);
        for (int i = 0; i <= m; i++)
            if (dp[n + 1][i])
                v[dp[n + 1][i] - 1] = i - 1;
        return v;
    }
};