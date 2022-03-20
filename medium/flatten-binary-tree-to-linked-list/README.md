
# Flatten Binary Tree to Linked List

## Medium

Date uploaded: 3/20/22

Language: C++

Runtime: 15 ms

Memory Usage: 12.7 mb

Details: The problem is simply flattening a binary tree to a linked list where its in the order of a preorder traversal. My solution is a brute force method however it does reorder the tree inplace. My algorithm traverses the tree on the right nodes until a node as a left node. Then it disconnects the left nodes and replaces the right node while saving its value for later than continuing. Once it reaches the end, the recursion recoils and if a right node was saved it then traverses back down the tree and adds the right node to the end. The algorithm then repeats this traversal until there are no nodes to the left of all nodes. This algorithm runs >O(n) runtime and has >O(1) space complexity if counting recursion.
