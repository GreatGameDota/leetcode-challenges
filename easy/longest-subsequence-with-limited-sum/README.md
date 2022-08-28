
# Longest Subsequence With Limited Sum

## Easy

Date uploaded: 8/28/22

Language: C++

Runtime: 61 ms

Memory Usage: 13.9 mb

Details: The problem is finding the longest subsequence whose sum is less than or equal to a given query value. My algorithm first sorts the list then for each query greedily takes the smallest numbers until the sum is greater than the query target. This runs in O(m*n) runtime with O(1) space which not the most optimal (which uses binary search).
