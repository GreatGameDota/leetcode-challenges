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
    vector<vector<int>> ret;
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        dfs(root, vector<int>(), 0, targetSum);
        return ret;
    }

    void dfs(TreeNode *n, vector<int> path, int sum, int tar)
    {
        if (!n)
            return;

        path.push_back(n->val);
        sum += n->val;
        if (sum == tar && (!n->left && !n->right))
            ret.push_back(path);

        dfs(n->left, path, sum, tar);
        dfs(n->right, path, sum, tar);
    }
};