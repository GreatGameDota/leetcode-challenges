class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color)
            return image;
        int org = image[sr][sc];
        dfs(sr, sc, image, color, org);
        return image;
    }
    
    void dfs(int r, int c, vector<vector<int>> &im, int color, int org) {
        if (r >= im.size() || r < 0 || c > im[0].size() || c < 0 || im[r][c] != org)
            return;
        
        im[r][c] = color;
        
        dfs(r + 1, c, im, color, org);
        dfs(r - 1, c, im, color, org);
        dfs(r, c + 1, im, color, org);
        dfs(r, c - 1, im, color, org);
    }
};