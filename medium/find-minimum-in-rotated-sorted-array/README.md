
# Find Minimum in Rotated Sorted Array

## Medium

Date uploaded: 2/10/22

Language: C++

Runtime: 8 ms

Memory Usage: 10.2 mb

Details: The problem is finding the minimum value in a rotated array previously sorted in ascending order. My algorithm uses the binary search algorithm to divide the array based on where the minimum value will be located. It checks whether the center value is greater than the first value and if it is will cutoff the first half else the last half. My algorithm also keeps track of all middle values in case the skipped middle value was the smallest value. This algorithm runs in O(logn) runtime which is the most optimal.
