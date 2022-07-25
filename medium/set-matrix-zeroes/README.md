
# Set Matrix Zeroes

## Medium

Date uploaded: 7/25/22

Language: C++

Runtime: 21 ms

Memory Usage: 13.3 mb

Details: The problem is for every zero in a matrix, zero out all numbers in the same row and column each zero appears in. My algorithm iterates over the matrix and keeps track of the row and column of the first zero found then for every subsequent zero it uses the row and column of the first zero to store that the current row and column need to be zeroed out. This algorithm runs in O(n^2) runtime with O(1) space which is the most optimal algorithm.
