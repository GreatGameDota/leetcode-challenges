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
    int ret = 0;
    int goodNodes(TreeNode *root)
    {
        dfs(root, root->val);
        return ret;
    }

    void dfs(TreeNode *n, int max)
    {
        if (!n)
            return;

        if (n->val >= max)
        {
            ret++;
            max = n->val;
        }

        dfs(n->left, max);
        dfs(n->right, max);
    }
};