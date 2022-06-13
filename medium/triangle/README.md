
# Triangle

## Medium

Date uploaded: 6/13/22

Language: C++

Runtime: 12 ms

Memory Usage: 8.6 mb

Details: The problem is finding the most optimal path to traverse down a triangle where the total path is the sum of all the numbers passed. My solution uses buttom-up dp and starts from the bottom of the triangle to explore the smallest paths. This runs in O(n*m) runtime, where n is the height of the triangle and m is the average width of the triangle at each row, with O(k) space where k is the max width of the triangle. This is the most optimal algorithm.
