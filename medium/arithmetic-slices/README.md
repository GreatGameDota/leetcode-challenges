
# Arithmetic Slices

## Medium

Date uploaded: 6/22/22

Language: C++

Runtime: 300 ms

Memory Usage: 7.4 mb

Details: The problem is determining the amount of subarrays in a given array that are "arithmetic" where an array is arithmetic if its size is >=3 and each element in the list has the same difference with its next element. My algorithm uses bottom-up dp to explore all subarrays and check if the subarray is arithmetic. It does this by iterating over two for loops that generate all subarrays with length >=3 and then checking if the subarray is arithmetic by checking if the whole array except the last element was already calculated to be arithmetic. This runs in O(n^2) runtime with O(n) space which isn't the most optimal algorithm (which uses sliding window).
