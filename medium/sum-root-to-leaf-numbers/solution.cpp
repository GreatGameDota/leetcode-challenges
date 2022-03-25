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
    int sumNumbers(TreeNode *root)
    {
        dfs(root, 0, 0);
        return sum;
    }

    void dfs(TreeNode *n, int curr, int s)
    {
        if (!n)
            return;

        if (s > 0)
            curr *= 10;
        curr += n->val;

        if (!n->left && !n->right)
        {
            sum += curr;
            return;
        }

        dfs(n->left, curr, s + 1);
        dfs(n->right, curr, s + 1);
    }
};