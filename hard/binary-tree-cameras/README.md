
# Binary Tree Cameras

## Hard

Date uploaded: 6/17/22

Language: C++

Runtime: 25 ms

Memory Usage: 21.3 mb

Details: The problem is calculating the smallest amount of cameras needs to see the entire binary tree where each camera sees the node its on, its parent, and two child nodes. My algorithm uses dfs to traverse the tree and a greedy dp algorithm to assign cameras. It does this by just checking the child nodes of each node and whether both are seen, one hasn't been seen, or one of them is a camera. This runs in O(n) runtime with O(n) space which is the most optimal algorithm.
