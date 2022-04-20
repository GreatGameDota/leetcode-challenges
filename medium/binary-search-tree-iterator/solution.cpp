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
class BSTIterator
{
public:
    vector<int> nodes;
    int i = 0;
    BSTIterator(TreeNode *root)
    {
        dfs(root);
    }

    void dfs(TreeNode *n)
    {
        if (!n)
            return;

        dfs(n->left);

        nodes.push_back(n->val);

        dfs(n->right);
    }

    int next()
    {
        return nodes[i++];
    }

    bool hasNext()
    {
        return i < nodes.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */