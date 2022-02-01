/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
public:
    map<int, int> seen;
    map<int, Node *> list;

    Node *cloneGraph(Node *node)
    {
        if (!node)
            return NULL;

        Node *head = NULL;

        queue<Node *> q;
        q.push(node);

        while (!q.empty())
        {
            Node *old = q.front();
            q.pop();

            if (seen[old->val])
                continue;
            seen[old->val] = 1;

            if (!list[old->val])
            {
                Node *newNode = new Node(old->val);
                list[old->val] = newNode;
            }

            if (!head)
                head = list[old->val];

            for (Node *n : old->neighbors)
            {
                if (!seen[n->val])
                    q.push(n);

                if (!list[n->val])
                {
                    Node *n2 = new Node(n->val);
                    list[n->val] = n2;
                }
                list[old->val]->neighbors.push_back(list[n->val]);
            }
        }

        return head;
    }
};