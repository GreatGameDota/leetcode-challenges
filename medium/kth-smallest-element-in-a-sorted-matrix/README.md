
# Kth Smallest Element in a Sorted Matrix

## Medium

Date uploaded: 6/4/22

Language: C++

Runtime: 55 ms

Memory Usage: 14.2 mb

Details: The problem is finding the kth smallest element in a matrix where all rows and columns in the matrix are sorted. My solution uses a max heap priority queue to sort all values in the array and remove any numbers bigger than the kth number. This solution is not the most optimal solution as it uses >O(n^2) runtime complexity and O(n^2) space complexity.
