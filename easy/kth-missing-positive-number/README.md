
# Kth Missing Positive Number

## Easy

Date uploaded: 3/6/23

Language: C++

Runtime: 0 ms

Memory Usage: 9.5 mb

Details: The problem is determining the kth first missing number from a given list. My algorithm iterates over the list and keeps track of the current number the given list should have or is missing from it. If the list is missing a number then k is decremented until k is 0 which means the kth missing number was found. If the end of the list is reached and there wasn't k missing numbers then k is decremented and the tracked number incremented until k reaches 0. This algorithm runs in O(n) runtime with O(1) space which is the most optimal runtime.
