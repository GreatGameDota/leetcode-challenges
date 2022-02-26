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
    bool isValidBST(TreeNode* root) {
        return check(root, (double)INT_MIN - 1, (double)INT_MAX + 1);
    }
    
    bool check(TreeNode *n, double low, double high) {
        if (!n)
            return true;
        
        bool res = true;
        if (n->val >= high)
            res = false;
        if (n->val <= low)
            res = false;
        
        return (res && check(n->left, low, n->val) && check(n->right, n->val, high));
    }
};