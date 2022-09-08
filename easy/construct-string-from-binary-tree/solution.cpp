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
    string ret = "";
    string tree2str(TreeNode *root)
    {
        dfs(root);
        return ret;
    }

    void dfs(TreeNode *n)
    {
        if (!n)
            return;

        ret += to_string(n->val);

        if (n->left || n->right)
        {
            ret += "(";
            dfs(n->left);
            ret += ")";
        }
        if (n->right)
        {
            ret += "(";
            dfs(n->right);
            ret += ")";
        }
    }
};