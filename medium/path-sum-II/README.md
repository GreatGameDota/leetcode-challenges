
# Path Sum II

## Medium

Date uploaded: 2/24/22

Language: C++

Runtime: 24 ms

Memory Usage: 38.9 mb

Details: The problem is simply returning all root-to-leaf paths where all nodes' values sum to a target value. My algorithm uses recursive dfs and backtracking to keep track of the sum and path as it traverses down the tree. This runs in O(n^2) runtime which is the most optimal. However my solution uses more memory because it creates a copy of paths for each recursive call (this can be fixed with pass by reference and deleting the last value in the path at the end of every dfs call).
