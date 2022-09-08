
# Construct String from Binary Tree

## Easy

Date uploaded: 9/7/22

Language: C++

Runtime: 32 ms

Memory Usage: 23.6 mb

Details: The problem is simply printing out a binary tree in inorder order and not printing empty subtrees. My algorithm uses recursive dfs to iterate over all nodes and print their contents as well as printing the parenthesis around each node value for the left subtree if either tree isn't null and right subtree if it isn't null. This runs in O(n) runtime with O(h) space which is the most optimal algorithm.
