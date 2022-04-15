
# Trim a Binary Search Tree

## Medium

Date uploaded: 4/15/22

Language: C++

Runtime: 30 ms

Memory Usage: 24.2 mb

Details: The problem is simply trimming nodes from a bst that don't fit into a given range. My algorithm first traverses the binary tree and stores all values that fit in the range. Then it reconstructs a bst with those values and returns it. This has a runtime of O(nlogn) and O(n^2) worst case which is not the most optimal runtime of O(n).
