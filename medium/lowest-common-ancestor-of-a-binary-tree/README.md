
# Lowest Common Ancestor of a Binary Tree

## Medium

Date uploaded: 4/13/22

Language: C++

Runtime: 15 ms

Memory Usage: 19.2 mb

Details: The problem is finding the lowest common ancestor of two given nodes in a binary tree. My algorithm traverses the tree using recursive dfs and as it traverses keeps a list of the path its taken so far. Once it finds one of the nodes it saves the path into a global list and continues traversing and once it finds the second node it loops through both paths until they differ and the last common node is returned as the answer. This isn't the most optimal algorithm especially with space complexity but it has good runtime complexity of O(n) + other operations.
