
# Average of Levels in Binary Tree

## Easy

Date uploaded: 1/19/22

Language: C++

Runtime: 52 ms

Memory Usage: 22.3 mb

Details: The problem is simply finding the average of all nodes in each level of the binary tree. My algorithm first uses recursive dfs to find the height of the tree. It then does a recursive level-wise dfs and accumulates all nodes on each level. This has a runtime of h*O(n) which is far from optimal. The best solution is O(n) iterative bfs.
