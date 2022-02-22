/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
    Node *connect(Node *root)
    {
        int d = dfs(root, 0);

        vector<vector<Node *>> res(d, vector<Node *>());
        inorder(root, 0, res);

        for (auto v : res)
        {
            for (int i = 0; i < v.size() - 1; i++)
            {
                v[i]->next = v[i + 1];
            }
        }

        return root;
    }

    void inorder(Node *n, int lvl, vector<vector<Node *>> &res)
    {
        if (!n)
            return;
        res[lvl].push_back(n);
        inorder(n->left, lvl + 1, res);
        inorder(n->right, lvl + 1, res);
    }

    int dfs(Node *n, int h)
    {
        if (!n)
            return h;
        return max(dfs(n->left, h + 1), dfs(n->right, h + 1));
    }
};