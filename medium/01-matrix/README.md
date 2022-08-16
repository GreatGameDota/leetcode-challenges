
# 01 Matrix

## Medium

Date uploaded: 8/15/22

Language: C++

Runtime: 1898 ms

Memory Usage: 29.4 mb

Details: The problem is determining the smallest distance to a 0 for every number in a matrix. My algorithm uses recursive dfs to explore all possible paths to every node in the graph starting from the first instance of a 0. It also prunes the paths based on whether the current distance is greater than or equal to the saved final distance to a zero. This is far from the most optimal algorithm and barely accepts. The most optimal algorithm runs in O(2 * n^2) runtime using bottom up dp.
