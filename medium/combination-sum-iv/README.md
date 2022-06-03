
# Combination Sum IV

## Medium

Date uploaded: 6/3/22

Language: C++

Runtime: 0 ms

Memory Usage: 6.6 mb

Details: The problem is finding all possible combinations of distinct numbers in an array that add up to a given target (including duplicate combinations). My algorithm is simply a recursive backtracking algorithm using memoization (which is also Top-Down DP). The backtracking starts with a sum of 0 and for each recursive call loops through all numbers in the list, adds the number to the sum and recursively calls itself. Memoization is then added so that after it finishes loops over all numbers it saves the total combinations found to be used in later calls. This runs in O(NT) runtime with O(T) space (with additions recursive stack frames) where N is the amount of elements in the list and T is the given target value. This is the most optimal algorithm.
