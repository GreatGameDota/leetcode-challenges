
# Furthest Building You Can Reach

## Medium

Date uploaded: 6/21/22

Language: C++

Runtime: 114 ms

Memory Usage: 53.7 mb

Details: The problem is determining the farthest you can get by traversing a list where you can only go from a small number to a bigger number by either places bricks up to the number or using a ladder. My algorithm uses a min heap and greedy algorithm to determine the amount of bricks used to reach the farthest distance. It does this by greedily using ladders for all jumps until it runs out of ladders whereby it then pops the lowest jumps from the min heap and replaces the ladder with bricks. This runs in O(nlogl) runtime, where n is the length of the list and l is the amount of ladders, with O(l) space and is the most optimal algorithm.
