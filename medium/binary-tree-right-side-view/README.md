
# Binary Tree Right Side View

## Medium

Date uploaded: 2/23/22

Language: C++

Runtime: 7 ms

Memory Usage: 12.2 mb

Details: The problem is simply returning the values of all nodes on the right most side of each level of a binary tree. My brute force solution uses a recursive in order traversal algorithm to order all node values by level. I then just return a list of the last value of each level from the in order traversal array. This algorithm runs in O(2n) runtime which is not the most optimal solution of O(n).
