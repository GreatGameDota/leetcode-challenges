class Solution {
    class Node {
        public:
            vector<Node *> edges;
            int val;
            Node(int v) : val{v} {};
            void add(Node *n) {
                edges.push_back(n);
            }
    };
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<Node *> graph;
        for (int i = 0; i < n; i++) {
            graph.push_back(new Node(i));
        }
        
        for (vector<int> &p : edges) {
            graph[p[0]]->add(graph[p[1]]);
            graph[p[1]]->add(graph[p[0]]);
        }
        
        unordered_set<int> rest;
        for (int &i : restricted)
            rest.insert(i);
        
        return dfs(graph[0], rest);
    }
    
    int dfs(Node *n, unordered_set<int> &rest) {
        if (n->val < 0 || rest.count(n->val))
            return 0;
        
        n->val = -1;
        
        int tot = 1;
        for (Node *no : n->edges)
            tot += dfs(no, rest);
        return tot;
    }
};