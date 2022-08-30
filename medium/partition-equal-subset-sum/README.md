
# Partition Equal Subset Sum

## Medium

Date uploaded: 8/29/22

Language: C++

Runtime: 219 ms

Memory Usage: 11.8 mb

Details: The problem is determining whether it is possible to split an array into 2 subsequences whose sums are equal. My algorithm uses backtracking with memoization to explore all possible subsequence sums and finds a sum that is half to the total sum. This runs in O(n*s) runtime, where s is the total sum, with O(n\*s) space which is optimal but not the most optimal (can use O(s) space).
