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
    TreeNode *ret;
    TreeNode *root2 = nullptr;
    TreeNode *increasingBST(TreeNode *root)
    {
        dfs(root);
        return ret;
    }

    void dfs(TreeNode *n)
    {
        if (!n)
            return;

        dfs(n->left);

        TreeNode *temp = n->right;
        if (!root2)
        {
            root2 = n;
            root2->left = nullptr;
            root2->right = nullptr;
            ret = root2;
        }
        else
        {
            root2->right = n;
            root2 = root2->right;
            root2->left = nullptr;
            root2->right = nullptr;
        }

        dfs(temp);
    }
};