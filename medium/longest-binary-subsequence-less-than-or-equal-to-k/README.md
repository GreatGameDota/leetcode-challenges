
# Longest Binary Subsequence Less Than or Equal to K

## Medium

Date uploaded: 6/19/22

Language: C++

Runtime: 0 ms

Memory Usage: 6.8 mb

Details: The problem is finding the longest subsequence of bits in a binary string where the binary value of the subsequence is less than or equal to a given number. My algorithm greedily searches from the end of the string and takes any 1's as long as the value of the sequence is small enough and all 0's. This runs in O(n) runtime with O(1) space and is the most optimal algorithm.
