
# Balanced Binary Tree

## Easy

Date uploaded: 8/31/22

Language: C++

Runtime: 15 ms

Memory Usage: 21.1 mb

Details: The problem is simply determining if a binary tree is balanced where balanced just means no node has a height difference of more than one. My algorithm uses recursive dfs to iterate over all nodes and keep track of the deepest node on the left and right subtree of every node. Then it just checks whether the two subtrees differ by more than 1. This runs in O(n) runtime with O(n) space which is the most optimal algorithm.
