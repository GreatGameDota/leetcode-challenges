
# Binary Tree Level Order Traversal

## Medium

Date uploaded: 2/21/22

Language: C++

Runtime: 3 ms

Memory Usage: 12.4 mb

Details: The problem is simply converting a binary tree into a 2d array where each level of the tree is a single array of node values. My algorithm first gets the height of the tree using recursive dfs. Then it creates the array before traversing the tree again using recursive dfs where it keeps track of what level it's on and adds the current node to the corresponding spot in the 2d array. This algorithm runs in O(n) runtime which is the most optimal.
