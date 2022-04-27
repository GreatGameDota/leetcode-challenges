class Solution
{
    class Node
    {
    public:
        char val;
        int id;
        vector<Node *> edges;
        Node(char v, int i)
        {
            val = v;
            id = i;
        }
        void add(Node *n)
        {
            edges.push_back(n);
        }
    };

public:
    string smallestStringWithSwaps(string s, vector<vector<int>> &pairs)
    {
        vector<Node> graph;
        for (int i = 0; i < s.length(); i++)
            graph.push_back(Node(s[i], i));
        for (auto &p : pairs)
        {
            graph[p[0]].add(&graph[p[1]]);
            graph[p[1]].add(&graph[p[0]]);
        }

        vector<int> seen(s.length(), 0);
        for (int i = 0; i < graph.size(); i++)
        {
            if (seen[i] == 0)
            {
                vector<int> ids;
                vector<char> vals;
                ids.push_back(i);
                vals.push_back(graph[i].val);

                seen[i] = 1;
                queue<Node *> q;
                q.push(&graph[i]);
                while (!q.empty())
                {
                    Node *n = q.front();
                    q.pop();
                    for (int j = 0; j < n->edges.size(); j++)
                    {
                        if (seen[n->edges[j]->id] == 0)
                        {
                            q.push(n->edges[j]);

                            seen[n->edges[j]->id] = 1;
                            ids.push_back(n->edges[j]->id);
                            vals.push_back(n->edges[j]->val);
                        }
                    }
                }

                sort(vals.begin(), vals.end());
                sort(ids.begin(), ids.end());
                for (int j = 0; j < ids.size(); j++)
                    graph[ids[j]].val = vals[j];
            }
        }

        string ret = "";
        for (Node &n : graph)
            ret += n.val;

        return ret;
    }
};