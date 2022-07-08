
# Ugly Number II

## Medium

Date uploaded: 7/8/22

Language: C++

Runtime: 8 ms

Memory Usage: 5.8 mb

Details: The problem is finding the nth ugly number where an ugly number is a number with only 2,3 or 5 prime factors. My algorithm uses dp to calculate all ugly numbers starting from 1 and stopping at n. It does this by keeping 3 pointers of the previous numbers to multiply by 2,3 and 5 and saving the smallest number and incrementing the corresponding pointer. This runs in O(n) runtime with O(n) space which is the most optimal algorithm.
