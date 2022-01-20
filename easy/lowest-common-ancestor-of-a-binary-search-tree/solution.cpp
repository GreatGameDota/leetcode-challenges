/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
public:
    TreeNode *ret;
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        dfs(root, p->val, q->val);
        return ret;
    }

    void dfs(TreeNode *n, int val1, int val2)
    {
        ret = n;

        if (n->val > val1 && n->val > val2)
            dfs(n->left, val1, val2);

        if (n->val < val1 && n->val < val2)
            dfs(n->right, val1, val2);
    }
};