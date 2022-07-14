
# Construct Binary Tree from Preorder and Inorder Traversal

## Medium

Date uploaded: 7/14/22

Language: C++

Runtime: 66 ms

Memory Usage: 26 mb

Details: The problem is constructing a binary tree given two lists of numbers representing a preorder and inorder traversal of the same binary tree. My algorithm recursively builds the tree and keeps track of the nodes which go to the left and right of each parent node based on where the parent node appears in the inorder list. This runs in O(n^2) runtime with O(n) space which is not the most optimal algorithm (which is simply caching the indices of every value in the inorder list).
