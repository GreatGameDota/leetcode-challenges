
# Minimum Size Subarray Sum

## Medium

Date uploaded: 8/27/22

Language: C++

Runtime: 46 ms

Memory Usage: 28.2 mb

Details: The problem is determining the length of the smallest subarray in a given array whose sum is greater than or equal to a given target. My algorithm converts the array to a prefix sum array then iterates a sliding window over it which expands if the sum is less than the target or contracts if greater than it. This runs in O(n) runtime with O(1) space which is the most optimal algorithm (it can also be done in O(nlogn) runtime using binary search).
