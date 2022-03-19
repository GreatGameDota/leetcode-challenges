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
    void recoverTree(TreeNode *root)
    {
        bool swap = true;
        while (swap)
        {
            swap = false;
            dfs(root, nullptr, nullptr, swap);
        }
    }

    void dfs(TreeNode *n, TreeNode *min, TreeNode *max, bool &swap)
    {
        if (!n)
            return;
        if (min && n->val < min->val)
        {
            int temp = min->val;
            min->val = n->val;
            n->val = temp;
            swap = true;
        }
        else if (max && n->val > max->val)
        {
            int temp = max->val;
            max->val = n->val;
            n->val = temp;
            swap = true;
        }

        dfs(n->left, min, n, swap);
        dfs(n->right, n, max, swap);
    }
};