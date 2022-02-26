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
    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        int max = nums[0];
        int midx = 0;
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] > max)
            {
                max = nums[i];
                midx = i;
            }

        TreeNode *root = new TreeNode(max);

        partition(nums, 0, nums.size() - 1, midx, root);

        return root;
    }

    void partition(vector<int> &nums, int left, int right, int idx, TreeNode *n)
    {
        if (right - left == 0)
            return;

        int max = nums[left];
        int midx = -1;
        if (idx != left)
        {
            midx = left;
            for (int i = left + 1; i < idx; i++)
                if (nums[i] > max)
                {
                    max = nums[i];
                    midx = i;
                }
        }
        else
            max = INT_MIN;

        int max2 = INT_MIN;
        int midx2 = -1;
        if (idx != right)
        {
            max2 = nums[idx + 1];
            midx2 = idx + 1;
            for (int i = idx + 2; i <= right; i++)
                if (nums[i] > max2)
                {
                    max2 = nums[i];
                    midx2 = i;
                }
        }

        if (max != INT_MIN)
            n->left = new TreeNode(max);
        if (max2 != INT_MIN)
            n->right = new TreeNode(max2);

        if (midx != -1)
            partition(nums, left, idx - 1, midx, n->left);
        if (midx2 != -1)
            partition(nums, idx + 1, right, midx2, n->right);
    }
};