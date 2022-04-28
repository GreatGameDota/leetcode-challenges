
# Path With Minimum Effort

## Medium

Date uploaded: 4/28/22

Language: C++

Runtime: 1438 ms

Memory Usage: 428.3 mb

Details: The problem is finding the path of least resistance to go from top left to bottom right of a matrix where resistance is the maximum difference between two numbers on the whole path. My algorithm creates a graph from all the values in the matrix where each edge is the difference between them. I then use binary search to find the smallest difference threshold that reaches the end of the matrix where I use dfs to traverse the graph. This is far from the most optimal algorithm which uses Dijikstra's algorithm.
