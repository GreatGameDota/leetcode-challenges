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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int idx = 0;
        return build(preorder, inorder, 0, preorder.size() - 1, idx);
    }

    TreeNode *build(vector<int> &pre, vector<int> &in, int start, int end, int &idx)
    {
        if (start > end)
            return nullptr;

        int i;
        for (i = start; i <= end; i++)
            if (in[i] == pre[idx])
                break;

        TreeNode *n = new TreeNode(pre[idx++]);
        n->left = build(pre, in, start, i - 1, idx);
        n->right = build(pre, in, i + 1, end, idx);
        return n;
    }
};