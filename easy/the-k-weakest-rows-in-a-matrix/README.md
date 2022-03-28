
# The K Weakest Rows in a Matrix

## Easy

Date uploaded: 3/27/22

Language: C++

Runtime: 10 ms

Memory Usage: 11.3 mb

Details: The problem is simply returning the k weakest rows where each row in a matrix's strength is determined by the amount of 1's in it. My algorithm uses a priority queue heap to store and order all rows in the matrix and then pops k amount of rows from it. This isn't the most optimal because it is possible to determine the strength of each row using binary search instead of linear.
