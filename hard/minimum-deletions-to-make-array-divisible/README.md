
# Minimum Deletions to Make Array Divisible

## Hard

Date uploaded: 7/17/22 (completed the previous day)

Language: C++

Runtime: 224 ms

Memory Usage: 82.4 mb

Details: The problem is determining the minimum deletions inorder to make the smallest number in one list divide into all numbers in a different list evenly. My algorithm first counts the frequency of all numbers, in order, in the first list. Then it loops over the frequencies and checks if each number can divide the second list. This runs in O(nlogn + nm) runtime which is not the most optimal algorithm.
