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
    bool flag = false;
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        dfs(root, 0, targetSum);
        return flag;
    }

    void dfs(TreeNode *n, int sum, int target)
    {
        if (!n)
            return;

        sum += n->val;

        if (!n->left && !n->right)
        {
            if (sum == target)
                flag = true;
        }

        dfs(n->left, sum, target);
        dfs(n->right, sum, target);
    }
};