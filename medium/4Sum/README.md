
# 4Sum

## Medium

Date uploaded: 6/8/22

Language: C++

Runtime: 41 ms

Memory Usage: 13 mb

Details: The problem is finding 4 unique numbers in a list that add up to a target value. My algorithm simply adds a loop around my 3Sum solution in order to iterate over all unique pairs of numbers and for each pair of numbers performs the 2Sum algorithm using two pointers inorder to find another pair of numbers which combined with the first pair, sum to the target. This is the most efficient algorithm running in O(n^2) runtime with O(1) space however a better algorithm would be one that expands out to kSum for any amount of k.
