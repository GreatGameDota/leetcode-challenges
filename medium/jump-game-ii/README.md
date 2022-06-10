
# Jump Game II

## Medium

Date uploaded: 6/10/22

Language: C++

Runtime: 16 ms

Memory Usage: 16.5 mb

Details: The problem is calculating the smallest amount of jumps required to reach the end of the list where each value in the list is the max distance that each jump can go. My algorithm uses greedy dfs to find the farthest possible next jump after every jump and only makes that jump once all possible jumps are explored. This runs in O(n) runtime with O(1) space which is the most optimal algorithm.
