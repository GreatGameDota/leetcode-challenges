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
    int sum = 0;
    int maxDepth = 1;
    int deepestLeavesSum(TreeNode *root)
    {
        dfs(root, 1);
        return sum;
    }

    void dfs(TreeNode *n, int d)
    {
        if (!n)
            return;

        if (d == maxDepth)
            sum += n->val;
        if (d > maxDepth)
        {
            maxDepth = d;
            sum = n->val;
        }

        dfs(n->left, d + 1);
        dfs(n->right, d + 1);
    }
};