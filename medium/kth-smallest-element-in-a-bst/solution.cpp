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
    int ret = -1;

    int kthSmallest(TreeNode *root, int k)
    {
        int num = 0;
        dfs(root, k, num);
        return ret;
    }

    void dfs(TreeNode *n, int k, int &num)
    {
        if (!n || ret != -1)
            return;

        dfs(n->left, k, num);
        num++;

        if (num == k)
            ret = n->val;

        dfs(n->right, k, num);
    }
};