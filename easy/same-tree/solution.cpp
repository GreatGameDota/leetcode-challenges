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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        return dfs(p, q);
    }

    bool dfs(TreeNode *n1, TreeNode *n2)
    {
        if (!n1 && !n2)
            return true;
        if (!n1 || !n2)
            return false;

        if (n1->val != n2->val)
            return false;

        return (dfs(n1->left, n2->left) && dfs(n1->right, n2->right));
    }
};