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
    TreeNode* pruneTree(TreeNode* n) {
        if (!n)
            return nullptr;
        
        n->left = pruneTree(n->left);
        n->right = pruneTree(n->right);
        
        if (n->val == 0 && !n->left && !n->right)
            return nullptr;
        return n;
    }
};