
# Search a 2D Matrix II

## Medium

Date uploaded: 6/5/22

Language: C++

Runtime: 106 ms

Memory Usage: 14.9 mb

Details: The problem is searching for a target number in a 2d matrix where the matrices' rows and columns are sorted. My algorithm uses binary search to traverse from the top right to the bottom left of the matrix and reduce the search space by one row or column. This runs in O(n+m) runtime where n is width of matrix and m is height of the matrix. This is the most optimal solution.
