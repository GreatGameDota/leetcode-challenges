
# Combination Sum III

## Medium

Date uploaded: 3/9/22

Language: C++

Runtime: 0 ms

Memory Usage: 6.4 mb

Details: The problem is finding all combinations of numbers (between 1-9) which add up to a target number. However, the combination must be k amount of numbers and each number can only be used once. My algorithm uses recursive backtracking to explore all combinations. It has two base cases for when the current combination's size is greater than k, if the sum equals the target and current combination equals k. Then it loops through all possible numbers from current current number to 9 and backtracks with the current number added. This is the most optimal algorithm.
