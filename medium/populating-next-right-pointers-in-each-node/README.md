
# Populating Next Right Pointers in Each Node

## Medium

Date uploaded: 9/30/21

Language: C++

Runtime: 27 ms

Memory Usage: 17.4 mb

Details: The problem is simply connecting each node in a binary search tree to its neighbor too its right. My algorithm first calculates the height of the tree then does a level-order traversal. For each level it stores every node into a list then after its done traversing it connects all the nodes together. This algorithm is far from optimal in both runtime and memory.
