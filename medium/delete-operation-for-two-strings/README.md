
# Delete Operation for Two Strings

## Medium

Date uploaded: 6/14/22

Language: C++

Runtime: 37 ms

Memory Usage: 6.8 mb

Details: The problem is finding the smallest amount of operations in order to make two strings the same where the only operation is deleting a letter from the first or second string. My algorithm just uses the longest common subsequence algorithm and subtract that times two from the total length of both strings to find the amount of letters that need to be removed. This runs in O(n*m) runtime with O(n) space which is the most optimal algorithm.
