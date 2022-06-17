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
    int res = 0;
    int minCameraCover(TreeNode *root)
    {
        return (dfs(root) == 0 ? 1 : 0) + res;
    }

    int dfs(TreeNode *n)
    {
        if (!n)
            return 1;

        int left = dfs(n->left);
        int right = dfs(n->right);

        if (left == 0 || right == 0)
        {
            res++;
            return 2;
        }
        if (left == 1 && right == 1)
            return 0;
        // left or right is a camera
        return 1;
    }
};