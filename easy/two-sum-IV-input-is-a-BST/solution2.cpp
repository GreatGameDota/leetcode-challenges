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
#include <vector>
class Solution
{
public:
    bool findTarget(TreeNode *root, int k)
    {
        bool ans = false;
        vector<int> nums;
        inorder(root, nums);

        int start = 0, end = nums.size() - 1;
        while (start != end)
        {
            if (nums[start] + nums[end] == k)
                return true;
            else if (nums[start] + nums[end] < k)
                start++;
            else if (nums[start] + nums[end] > k)
                end--;
        }

        return false;
    }

    void inorder(TreeNode *n, vector<int> &nums)
    {
        if (!n)
            return;

        inorder(n->left, nums);
        nums.push_back(n->val);
        inorder(n->right, nums);
    }
};