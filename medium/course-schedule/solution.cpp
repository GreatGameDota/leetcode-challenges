class Solution
{
    class Node
    {
    public:
        vector<Node *> next;
        int val;
        bool seen = false;
        bool recStack = false;
        Node(Node *n, int v) : val{v} { next.push_back(n); };
        Node(int v) : val{v} {};
    };

public:
    bool ret = true;
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<Node> graph;
        for (int i = 0; i < numCourses; i++)
            graph.push_back(Node(i));

        for (vector<int> v : prerequisites)
            graph[v[0]].next.push_back(&graph[v[1]]);

        for (Node &n : graph)
            dfs(&n);

        return ret;
    }

    void dfs(Node *n)
    {
        if (n->seen)
        {
            n->recStack = false;
            return;
        }

        n->seen = true;
        n->recStack = true;

        for (Node *no : n->next)
        {
            if (!no->seen)
                dfs(no);
            else if (no->recStack)
                ret = false;
        }
        n->recStack = false;
    }
};