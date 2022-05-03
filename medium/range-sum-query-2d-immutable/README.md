
# Range Sum Query 2D - Immutable

## Medium

Date uploaded: 5/3/22

Language: C++

Runtime: 735 ms

Memory Usage: 147.9 mb

Details: The problem is finding the sum of a given area in a 2d matrix. My algorithm creates prefix sums of every row in the matrix and then loops over every row in an area getting the sum of each row between the left and right columns. This is not the most optimal algorithm as you can find the sum in constant time.
