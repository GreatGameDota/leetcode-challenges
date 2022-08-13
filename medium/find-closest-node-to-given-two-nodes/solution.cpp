class Solution
{
    class Node
    {
    public:
        int val;
        Node *next = nullptr;
        bool visited = false;
        Node(int v) : val{v} {};
    };

public:
    int closestMeetingNode(vector<int> &edges, int node1, int node2)
    {
        vector<Node *> graph;
        for (int i = 0; i < edges.size(); i++)
            graph.push_back(new Node(i));

        for (int i = 0; i < edges.size(); i++)
            if (edges[i] != -1)
                graph[i]->next = graph[edges[i]];

        vector<int> dist(edges.size(), INT_MAX);
        dfs(graph[node1], dist, 0);

        for (int i = 0; i < edges.size(); i++)
            graph[i]->visited = false;

        vector<int> dist2(edges.size(), INT_MAX);
        dfs(graph[node2], dist2, 0);

        int minNum = INT_MAX, minIdx = -1;
        for (int i = 0; i < dist.size(); i++)
        {
            if (max(dist[i], dist2[i]) < minNum)
            {
                minIdx = i;
                minNum = max(dist[i], dist2[i]);
            }
        }

        return minIdx;
    }

    void dfs(Node *n, vector<int> &d, int dist)
    {
        if (!n || n->visited)
            return;

        d[n->val] = dist;
        n->visited = true;

        dfs(n->next, d, dist + 1);
    }
};