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
    TreeNode *convertBST(TreeNode *root)
    {
        int sum = 0;
        dfs(root, sum);
        return root;
    }

    void dfs(TreeNode *n, int &sum)
    {
        if (!n)
            return;

        dfs(n->right, sum);
        sum += n->val;
        n->val = sum;
        dfs(n->left, sum);
    }
};