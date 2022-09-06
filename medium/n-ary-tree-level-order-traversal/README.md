
# N-ary Tree Level Order Traversal

## Medium

Date uploaded: 9/5/22

Language: C++

Runtime: 37 ms

Memory Usage: 11.9 mb

Details: The problem is converting a n-ary tree to a level order traversal list. My algorithm uses iterative bfs to iterate over all nodes in the tree and keep track of each level each node is on. For every node it adds it to the list and adds all child nodes to the queue. This runs in O(n) runtime with O(n) space which is optimal but not the most optimal (can use O(h) space using recursive dfs).
