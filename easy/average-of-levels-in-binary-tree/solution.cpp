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
    int height = 0;
    long long sum = 0;
    int count = 0;
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> ret;
        bfs(root, 1);

        for (int i = 0; i < height; i++)
        {
            sum = 0;
            count = 0;
            level(root, i + 1, 1);
            ret.push_back((double)sum / count);
        }

        return ret;
    }

    void bfs(TreeNode *n, int h)
    {
        if (!n)
            return;

        height = max(height, h);

        bfs(n->left, h + 1);
        bfs(n->right, h + 1);
    }

    void level(TreeNode *n, int target, int h)
    {
        if (!n)
            return;

        if (h == target)
        {
            count++;
            sum += n->val;
        }

        level(n->left, target, h + 1);
        level(n->right, target, h + 1);
    }
};