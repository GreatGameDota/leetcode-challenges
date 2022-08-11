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
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        TreeNode *root = new TreeNode(nums[nums.size() / 2]);
        divide(nums, root, 0, nums.size() / 2 - 1);
        divide(nums, root, nums.size() / 2 + 1, nums.size() - 1);
        return root;
    }

    void divide(vector<int> &nums, TreeNode *root, int l, int r)
    {
        if (l > r)
            return;
        build(root, nums[(l + r) / 2]);
        divide(nums, root, l, (l + r) / 2 - 1);
        divide(nums, root, (l + r) / 2 + 1, r);
    }

    void build(TreeNode *n, int val)
    {
        if (n->val > val)
        {
            if (n->left)
            {
                build(n->left, val);
            }
            else
            {
                n->left = new TreeNode(val);
            }
        }
        else
        {
            if (n->right)
            {
                build(n->right, val);
            }
            else
            {
                n->right = new TreeNode(val);
            }
        }
    }
};