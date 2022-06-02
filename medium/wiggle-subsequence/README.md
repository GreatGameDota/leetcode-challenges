
# Wiggle Subsequence

## Medium

Date uploaded: 6/2/22

Language: C++

Runtime: 4 ms

Memory Usage: 7.1 mb

Details: The problem is finding the length of the longest "wiggle" subsequence in an array where a wiggle sequence is a sequence of numbers where the difference between each pair of numbers switches between positive and negative. My algorithm uses a greedy algorithm where it greedily adds a number to the subsequence as long as it meets the requirements. It loops through each number and for each number checks the difference and checks whether it differs from the previous difference. If it differs then it increases the length of the subsequence and if it doesn't differ it just saves the difference type and continues. This runs in O(n) runtime with O(1) space complexity which is the most optimal algorithm.
