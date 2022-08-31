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
    int ret = INT_MIN;
    int diameterOfBinaryTree(TreeNode *root)
    {
        dfs(root, 0);
        return ret;
    }

    int dfs(TreeNode *n, int d)
    {
        if (!n)
            return d;
        d++;
        int left = dfs(n->left, d);
        int right = dfs(n->right, d);
        ret = max(ret, left + right - 2 * d);
        return max(left, right);
    }
};