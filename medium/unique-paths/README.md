
# Unique Paths

## Medium

Date uploaded: 6/20/22

Language: C++

Runtime: 0 ms

Memory Usage: 5.8 mb

Details: The problem is finding the amount of unique paths to traverse from the top-left of a 2d matrix to the bottom-right only going either down or right. My algorithm uses bottom-up dp to explore all possible paths and count the amount of unique paths. It does this by recreating the matrix and setting all values to zero except the starting index which is set to 1. Then it loops over all indices in the matrix and calculates the total amount of unique paths to reach the current index. This runs in O(m*n) runtime with O(m\*n) space which is the most optimal solution.
