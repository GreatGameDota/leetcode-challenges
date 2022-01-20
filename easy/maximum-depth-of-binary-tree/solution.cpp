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
    int depth = 0;
    int maxDepth(TreeNode *root)
    {
        dfs(root, 0);
        return depth;
    }

    void dfs(TreeNode *n, int d)
    {
        if (!n)
            return;
        d++;

        if (!n->left && !n->right)
            depth = max(depth, d);

        dfs(n->left, d);
        dfs(n->right, d);
    }
};