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
    vector<int> found;
    TreeNode *trimBST(TreeNode *root, int low, int high)
    {
        dfs(root, nullptr, low, high);

        if (found.empty())
            return nullptr;

        TreeNode *res = new TreeNode(found[0]);
        for (int i = 1; i < found.size(); i++)
            push(res, found[i]);

        return res;
    }

    void push(TreeNode *n, int val)
    {
        if (val < n->val)
        {
            if (n->left)
                push(n->left, val);
            else
                n->left = new TreeNode(val);
        }
        else
        {
            if (n->right)
                push(n->right, val);
            else
                n->right = new TreeNode(val);
        }
    }

    void dfs(TreeNode *n, TreeNode *prev, int l, int h)
    {
        if (!n)
            return;

        if (n->val >= l && n->val <= h)
            found.push_back(n->val);

        dfs(n->left, n, l, h);
        dfs(n->right, n, l, h);
    }
};