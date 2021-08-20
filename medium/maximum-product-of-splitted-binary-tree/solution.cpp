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
    int findMax(TreeNode *node, long long &max, long long &total)
    {
        if (!node)
            return 0;

        long long left = findMax(node->left, max, total);
        long long right = findMax(node->right, max, total);

        if (left * (total - left) > max)
            max = left * (total - left);
        if (right * (total - right) > max)
            max = right * (total - right);

        return node->val + left + right;
    }

    int maxProduct(TreeNode *root)
    {
        long long max = 0, prev = 0;
        long long total = 0;

        total = findMax(root, max, total);

        findMax(root, max, total);

        return max % 1000000007;
    }
};