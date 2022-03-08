
# Combination Sum II

## Medium

Date uploaded: 3/8/22

Language: C++

Runtime: 13 ms

Memory Usage: 13.8 mb

Details: The problem is finding all combinations of numbers from an array which add up to a target number. However, you can only use each number once and the list contains duplicate numbers. My algorithm uses recursive backtracking to explore all combinations and keep track of the total sum of each combination. It first sorts the list so duplicate numbers are all next to each other. Then in the backtracking function it first checks if the sum is equal to target for edge cases. Next, it does the base cases and then skips over any duplicate numbers before calling itself without the current number added to the sum/combination. Finally, it adds the current number to the sum/combination and calls itself. This isn't the most optimal algorithm as there are other backtracking solutions that use less recursion frames.
