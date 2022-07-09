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
class Solution
{
public:
    bool evaluateTree(TreeNode *root)
    {
        return dfs(root);
    }

    bool dfs(TreeNode *n)
    {
        if (!n->left && !n->right)
            return n->val;

        if (n->left && n->left->val < 2 && n->right && n->right->val < 2)
            return n->val == 2 ? (n->left->val || n->right->val) : (n->left->val && n->right->val);

        return n->val == 2 ? (dfs(n->left) || dfs(n->right)) : (dfs(n->left) && dfs(n->right));
    }
};