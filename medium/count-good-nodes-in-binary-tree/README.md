
# Count Good Nodes in Binary Tree

## Medium

Date uploaded: 9/1/22

Language: C++

Runtime: 248 ms

Memory Usage: 86.3 mb

Details: The problem is determining the count of nodes where the path from root to that node has no values greater than it. My algorithm uses recursive dfs to iterate over all nodes and keep track of the maximum value in the path to each node. If the current node is the new maximum value, then it is added to the "good" node count. This runs in O(n) runtime with O(h) space which is the most optimal algorithm.
