
# Construct Smallest Number From DI String

## Medium

Date uploaded: 8/14/22

Language: C++

Runtime: 188 ms

Memory Usage: 5.9 mb

Details: The problem is determining the lexicographically smallest string of digits that also meets the pattern string requirements where the pattern string contains I and D characters which mean whether the next digit is increasing or decreasing compared to the previous. My algorithm uses recursive backtracking to explore all possible strings that meet the requirement and saves the lexicographically smallest valid string. It does this by calling the recursive function for every possible starting digit then builds the string permutation based on whether the next digit needs to be greater than or less than the last added digit. This runs in >O(n) runtime and >O(n) space which is optimal but not the most optimal.
