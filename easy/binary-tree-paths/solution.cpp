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
    vector<string> ret;
    vector<string> binaryTreePaths(TreeNode *root)
    {
        string path = "";
        dfs(root, path);
        return ret;
    }

    void dfs(TreeNode *n, string &path)
    {
        if (!n)
            return;

        if (path != "")
            path += "->" + to_string(n->val);
        else
            path += to_string(n->val);

        if (!n->left && !n->right)
            ret.push_back(path);
        else
        {
            dfs(n->left, path);
            dfs(n->right, path);
        }

        int i = 0;
        while (i <= path.size() && path.back() != '>')
        {
            path.pop_back();
            i++;
        }
        if (i <= path.size())
            for (i = 0; i < 2; i++)
                path.pop_back();
    }
};