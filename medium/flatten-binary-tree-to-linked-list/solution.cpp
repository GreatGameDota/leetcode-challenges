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
    void flatten(TreeNode *root)
    {
        bool left = true;
        while (left)
        {
            left = false;
            dfs(root, left);
        }
    }

    void dfs(TreeNode *n, bool &left)
    {
        if (!n)
            return;

        TreeNode *r = nullptr;
        if (n->left)
        {
            r = n->right;
            n->right = n->left;
            n->left = nullptr;
            left = true;
        }

        dfs(n->right, left);

        if (r)
        {
            TreeNode *temp = n;
            while (temp->right)
                temp = temp->right;
            temp->right = r;
        }
    }
};