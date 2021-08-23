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
        sum(root, k, ans, nums);
        return ans;
    }

    void sum(TreeNode *n, int tar, bool &found, vector<int> &nums)
    {
        if (!n || found)
            return;

        sum(n->left, tar, found, nums);
        sum(n->right, tar, found, nums);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] - n->val == 0)
                found = true;
        }
        nums.push_back(tar - n->val);
    }
};