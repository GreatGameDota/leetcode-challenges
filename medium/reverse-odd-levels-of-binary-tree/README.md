
# Reverse Odd Levels of Binary Tree

## Medium

Date uploaded: 9/22/22

Language: C++

Runtime: 278 ms

Memory Usage: 75.8 mb

Details: The problem is reversing all nodes at every odd levels in a perfect balanced binary tree. My algorithm performs level order traversal using bfs. Once it reaches the end of an even level it iterates over the deque containing all the nodes in the next level and swaps the values of the nodes. This algorithm runs in >O(n) runtime with ~O(n) space which is optimal but not the most optimal (which is doing post-order traversal using two pointers).
