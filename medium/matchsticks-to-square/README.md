
# Matchsticks to Square

## Medium

Date uploaded: 7/12/22

Language: C++

Runtime: 302 ms

Memory Usage: 10.1 mb

Details: The problem is determining whether a given list of lengths can form a square. My algorithm uses backtracking to explore all possible combinations of lengths and place them in four buckets until it finds a combination that has four equal lengths. It also has pruning in order to make it not go over time limit. This runs in O(4^n) runtime with O(4^n) space which is the most optimal algorithm.
