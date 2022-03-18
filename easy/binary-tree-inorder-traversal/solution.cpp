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
    vector<int> ret;
    vector<int> inorderTraversal(TreeNode *root)
    {
        dfs(root);
        return ret;
    }

    void dfs(TreeNode *n)
    {
        if (!n)
            return;

        dfs(n->left);

        ret.push_back(n->val);

        dfs(n->right);
    }
};