
# Daily Temperatures

## Medium

Date uploaded: 7/15/22

Language: C++

Runtime: 332 ms

Memory Usage: 89 mb

Details: The problem is for every number in a list determining the amount of elements between it and a number that is larger than it. My algorithm uses a monotonic stack to store the indices of every number and pop all previous numbers that are less than the current. This runs in O(n) runtime with O(n) space which is not the most optimal algorithm (which uses O(1) space).
