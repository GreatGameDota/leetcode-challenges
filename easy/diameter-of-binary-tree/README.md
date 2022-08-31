
# Diameter of Binary Tree

## Easy

Date uploaded: 8/31/22

Language: C++

Runtime: 7 ms

Memory Usage: 20.2 mb

Details: The problem is finding the diameter of a binary tree where the diameter is the farthest distance between two nodes. My algorithm uses recursive dfs to iterate over all nodes and calculate the distance to each node from the root as well as the deepest node for every left and right subtree. It then finds the diameter by keeping track of the largest sum of the subtree distances. This runs in O(n) runtime with O(n) space which is the most optimal algorithm.
