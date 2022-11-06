
# Count Square Submatrices with All Ones

## Medium

Date uploaded: 11/5/22

Language: C++

Runtime: 171 ms

Memory Usage: 23.6 mb

Details: The problem is determining the total amount of unique squares of all sizes that only contain 1's in a given 2d matrix. My algorithm traverses the given matrix and for each position checks if it is 1 and builds a bigger square. If it does contribute to a larger square, its value is incremented based on the size of the smallest square it's adding to for future calculations. This runs in O(n*m) runtime with O(1) space which is the most optimal algorithm.
