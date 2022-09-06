/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> ret;
        if (!root)
            return ret;

        queue<pair<Node *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
            auto n = q.front();
            q.pop();

            if (n.second == ret.size())
                ret.push_back({n.first->val});
            else
                ret[n.second].push_back(n.first->val);

            for (Node *no : n.first->children)
                q.push({no, n.second + 1});
        }
        return ret;
    }
};