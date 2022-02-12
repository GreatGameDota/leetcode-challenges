
# Search a 2D Matrix

## Medium

Date uploaded: 2/12/22

Language: C++

Runtime: 4 ms

Memory Usage: 9.6 mb

Details: The problem is searching a sorted 2d matrix for a given value. My algorithm uses binary search to find the value. I unroll the 2d matrix into a 1d array by indexing the array using a single number. Doing so just makes the problem a textbook binary search algorithm. This runs in O(logn) runtime, where n is rows * columns, which is the most optimal.
