
# Max Area of Island

## Medium

Date uploaded: 7/15/22

Language: C++

Runtime: 23 ms

Memory Usage: 23.2 mb

Details: The problem is finding the largest area of 1's in a matrix of 1's and 0's where 1's are connected up, down, left and right. My algorithm loops over the whole matrix and once it finds a 1 element it does recursive dfs to explore all other 1 elements connected to it while also changing every connected 1 element to a 0 element. This runs in >O(n^2) runtime with >O(n^2) space which is the most optimal algorithm.
