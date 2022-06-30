
# Minimum Path Sum

## Medium

Date uploaded: 6/30/22

Language: C++

Runtime: 16 ms

Memory Usage: 9.6 mb

Details: The problem is finding the smallest path sum to traverse from the top-left to the bottom-right of a matrix where the path sum is the sum of all elements traversed over. My algorithm uses bottom-up dp to explore all paths and keep track of the shortest paths to each element. It does this by keeping track of the current and previous rows checked and calculating the current row based on the previous value in the same row and the same element in the previous row. This runs in O(n*m) runtime with O(m) space which is the most optimal algorithm.
