
# Binary Tree Pruning

## Medium

Date uploaded: 9/6/22

Language: C++

Runtime: 0 ms

Memory Usage: 8.8 mb

Details: The problem is pruning a binary tree so that all subtrees that only contain 0's are removed. My algorithm uses recursive dfs to iterate over all the nodes and remove any node whose value is 0 and their left and right subtrees are null. This runs in O(n) runtime with O(h) space which is the most optimal algorithm.
