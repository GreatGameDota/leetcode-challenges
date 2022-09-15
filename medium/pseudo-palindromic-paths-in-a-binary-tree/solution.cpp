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
    int ret = 0;
    int pseudoPalindromicPaths(TreeNode *root)
    {
        vector<int> freq(9, 0);
        dfs(root, freq);
        return ret;
    }

    void dfs(TreeNode *n, vector<int> &freq)
    {
        if (!n)
            return;

        freq[n->val - 1]++;

        if (!n->left && !n->right)
        {
            int cnt = 0;
            for (int i = 0; i < 9; i++)
                if (freq[i] & 1 == 1)
                    cnt++;
            if (cnt < 2)
                ret++;
            freq[n->val - 1]--;
            return;
        }

        dfs(n->left, freq);
        dfs(n->right, freq);

        freq[n->val - 1]--;
    }
};