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
    bool ret = true;
    bool isBalanced(TreeNode *root)
    {
        dfs(root, 0);
        return ret;
    }

    int dfs(TreeNode *n, int d)
    {
        if (!n || !ret)
            return d;

        int left = dfs(n->left, d + 1);
        int right = dfs(n->right, d + 1);

        if (abs(left - right) > 1)
            ret = false;

        return max(left, right);
    }
};