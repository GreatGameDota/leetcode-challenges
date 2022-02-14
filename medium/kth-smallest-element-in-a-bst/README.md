
# Kth Smallest Element in a BST

## Medium

Date uploaded: 2/14/22

Language: C++

Runtime: 11 ms

Memory Usage: 24.2 mb

Details: The problem is simply finding the kth smallest element in a bst. My algorithm simply uses recursive dfs to traverse the tree in ascending order and once I get to the kth element I save its value. This runs in O(n) runtime worst case which is optimal but not the most (other algorithms have better average case/if the tree is always balanced).
