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
    int total;

    int sumRootToLeaf(TreeNode *root)
    {
        bfs(root, 0);
        return total;
    }

    void bfs(TreeNode *n, int path)
    {
        if (n->val == 1)
        {
            path *= 2;
            path++;
        }
        else
            path *= 2;

        if (n->left)
            bfs(n->left, path);

        if (n->right)
            bfs(n->right, path);

        if (!n->left && !n->right)
        {
            total += path;
        }

        return;
    }
};