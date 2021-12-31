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
    int maxAncestorDiff(TreeNode *root)
    {
        return bfs(root);
    }

    int bfs(TreeNode *n)
    {
        if (!n)
        {
            return -1;
        }
        int num1, num2, num3;
        num3 = subtract(n, n);

        num1 = bfs(n->left);
        num2 = bfs(n->right);

        return max(max(num1, num2), num3);
    }

    int subtract(TreeNode *n, TreeNode *root)
    {
        int num1, num2, num3;
        if (!n)
        {
            return -1;
        }

        num2 = subtract(n->left, root);
        num3 = subtract(n->right, root);

        num1 = abs(n->val - root->val);
        return max(max(num1, num2), num3);
    }
};