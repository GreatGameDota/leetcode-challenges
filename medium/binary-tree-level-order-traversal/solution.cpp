/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        int d = dfs(root, 0);
        
        vector<vector<int>> res(d, vector<int>());
        inorder(root, 0, res);
        
        return res;
    }
    
    void inorder(TreeNode *n, int lvl, vector<vector<int>> &res) {
        if (!n) return;
        res[lvl].push_back(n->val);
        inorder(n->left, lvl + 1, res);
        inorder(n->right, lvl + 1, res);
    }
    
    int dfs(TreeNode *n, int h) {
        if (!n) return h;
        return max(dfs(n->left, h+1), dfs(n->right, h+1));
    }
};