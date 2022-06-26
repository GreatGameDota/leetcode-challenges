
# Non-decreasing Array

## Medium

Date uploaded: 6/25/22

Language: C++

Runtime: 27 ms

Memory Usage: 27.1 mb

Details: The problem is determining whether a single operation of changing a value in an array can make the whole array strictly increasing. My algorithm loops over the array keeping track of the previous two values in the array and if it finds two pairs of numbers that decrease instead of increase then it checks whether it can either increase the smaller number or decrease the bigger number. This runs in O(n) runtime with O(1) space which is the most optimal algorithm.
