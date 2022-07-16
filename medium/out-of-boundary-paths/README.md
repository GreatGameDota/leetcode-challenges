
# Out of Boundary Paths

## Medium

Date uploaded: 7/16/22

Language: C++

Runtime: 24 ms

Memory Usage: 9.4 mb

Details: The problem is determining the amount of paths from a starting position in a 2d matrix lead to the edges of the matrix where each path can only be a given amount long. My algorithm uses backtracking to explore all possible moves from each element and memoization to make the recursion efficient. This runs in O(moves * n * m) runtime with O(moves * n * m) space which isn't the most optimal algorithm but is accepted.
