
# Search in Rotated Sorted Array

## Medium

Date uploaded: 7/13/22

Language: C++

Runtime: 10 ms

Memory Usage: 11.1 mb

Details: The problem is finding the index of a given number in a rotated sorted array where being rotated is moving a chunk of the array to the end. My algorithm uses binary search to find the given number using divide and conquer. It does this by checking the values at the beginning and end along with the mid to figure out which part of the array mid is in or whether mid is in the middle of a sorted chunk so normal binary search can be applied. If mid is in a rotated segment or a rotated segment is in the current chunk then it checks whether target is contained within the sorted chunk mid is apart of. This runs in O(logn) runtime with O(1) space which is the most optimal algorithm.
