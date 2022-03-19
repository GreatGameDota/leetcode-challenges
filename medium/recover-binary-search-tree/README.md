
# Recover Binary Search Tree

## Medium

Date uploaded: 3/18/22

Language: C++

Runtime: 24 ms

Memory Usage: 57.7 mb

Details: The problem is simply finding two nodes in wrong positions in a binary search tree and swapping them so the tree is correct. My algorithm is a somewhat brute force where I use recursive dfs to find a node that doesn't fit the bst and swap the node with the other node it doesn't fit with. Then I just repeat this process until the bst is finally completely valid. I don't know the runtime of this algorithm but it doesn't have constant memory complexity which isn't the most optimal.
