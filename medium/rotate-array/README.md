
# Rotate Array

## Medium

Date uploaded: 4/5/22

Language: C++

Runtime: 43 ms

Memory Usage: 26.9 mb

Details: The problem is rotating an array a given number of times where rotating an array once is moving the last element to the front. My algorithm loops the amount needed to rotate and adds the last element to a stack and removes it from the array. Then it constructs a return array by popping all values off the stack and adding any value left in the original array to the end. This is far from the most efficient algorithm with O(n) runtime and O(n) space complexity.
