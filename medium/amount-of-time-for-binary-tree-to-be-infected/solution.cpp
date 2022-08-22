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
    class Node
    {
    public:
        int val;
        vector<Node *> edges;
        Node(int v) : val{v} {}
    };

public:
    int amountOfTime(TreeNode *root, int start)
    {
        Node *head = build(root, nullptr);
        Node *inf = dfs(head, start);
        return dfs2(inf, 0);
    }

    Node *build(TreeNode *n, Node *prev)
    {
        if (!n)
            return nullptr;

        Node *newNode = new Node(n->val);
        newNode->edges.push_back(prev);
        newNode->edges.push_back(build(n->left, newNode));
        newNode->edges.push_back(build(n->right, newNode));

        return newNode;
    }

    Node *dfs(Node *n, int s)
    {
        if (!n)
            return nullptr;

        if (n->val == s)
            return n;

        Node *n1 = dfs(n->edges[1], s);
        Node *n2 = dfs(n->edges[2], s);
        return n1 ? n1 : n2;
    }

    int dfs2(Node *n, int d)
    {
        if (!n || n->val == 0)
            return d - 1;

        d++;
        n->val = 0;

        int ret = -1;
        for (Node *no : n->edges)
            ret = max(ret, dfs2(no, d));
        return ret;
    }
};