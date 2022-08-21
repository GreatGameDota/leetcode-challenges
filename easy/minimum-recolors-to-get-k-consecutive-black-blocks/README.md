
# Minimum Recolors to Get K Consecutive Black Blocks

## Easy

Date uploaded: 8/20/22

Language: C++

Runtime: 7 ms

Memory Usage: 6.2 mb

Details: The problem is determining the smallest amount of changes in order to have a consecutive sequence of B characters with length of k. My algorithm uses a sliding window of length k to count the total amount of B characters and W characters and find the window with the smallest amount of W characters. This runs in O(n) runtime with O(1) space which is the most optimal algorithm.
