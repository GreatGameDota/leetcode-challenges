/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    TreeNode *ret = nullptr;
    vector<TreeNode *> found;
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {

        vector<TreeNode *> path;
        dfs(root, path, p, q);

        return ret;
    }

    void dfs(TreeNode *n, vector<TreeNode *> &path, TreeNode *p, TreeNode *q)
    {
        if (!n || ret)
            return;

        if (n == p || n == q)
        {
            if (found.empty())
            {
                for (TreeNode *i : path)
                    found.push_back(i);
                found.push_back(n);
            }
            else
            {
                int i = 0;
                while (i < found.size() && i < path.size() && found[i] == path[i])
                {
                    ret = path[i];
                    i++;
                }
                return;
            }
        }

        path.push_back(n);
        dfs(n->left, path, p, q);
        dfs(n->right, path, p, q);
        path.pop_back();
    }
};