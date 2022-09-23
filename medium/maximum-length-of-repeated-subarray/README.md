
# Maximum Length of Repeated Subarray

## Medium

Date uploaded: 9/20/22

Language: C++

Runtime: 307 ms

Memory Usage: 11.7 mb

Details: The problem is determining the longest subarray that contains elements in both given arrays. My algorithm uses bottom-up dp to explore all combinations of numbers in both arrays and keep track of where the two arrays overlap. This runs in O(n*m) runtime with O(n) space which is optimal but not the most optimal (better runtime using binary search and rolling hash, and O(1) space using sliding window).
