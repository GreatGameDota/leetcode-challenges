
# Unique Paths II

## Medium

Date uploaded: 6/30/22

Language: C++

Runtime: 4 ms

Memory Usage: 7.6 mb

Details: The problem is finding the amount of unique paths to traverse from the top-left of a 2d matrix to the bottom-right only going either down or right and avoiding obstacles. My algorithm uses bottom-up dp to explore all possible paths and count the amount of unique paths. It does this by only keeping track of the current row its explored and accumulating the amount if the current element does not have an obstacle. This runs in O(m*n) runtime with O(m) space which is the most optimal solution.
