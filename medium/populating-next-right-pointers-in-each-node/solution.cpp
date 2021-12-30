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
        int height = 0;
        Node *temp = root;
        while (temp)
        {
            height++;
            temp = temp->left;
        }

        for (int i = 1; i <= height; i++)
        {
            vector<Node *> *n = new vector<Node *>();
            bfs(root, i, n);
            for (int j = 0; j < n->size() - 1; j++)
            {
                (*n)[j]->next = (*n)[j + 1];
            }
        }

        return root;
    }

    void bfs(Node *n, int level, vector<Node *> *nodes)
    {
        if (!n)
        {
            return;
        }

        if (level == 1)
        {
            (*nodes).push_back(n);
            return;
        }

        if (level > 1)
        {
            if (n->left)
            {
                bfs(n->left, level - 1, nodes);
                bfs(n->right, level - 1, nodes);
            }
        }
    }
};