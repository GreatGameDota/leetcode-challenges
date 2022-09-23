
# Longest Nice Subarray

## Medium

Date uploaded: 9/22/22

Language: C++

Runtime: 454 ms

Memory Usage: 57.2 mb

Details: The problem is determining the longest subarray where all pairs in the subarray &'d equal zero (aka no overlapping bits). My algorithm brute force tests all window sizes by sliding the start of the window over the array and increasing the size of the window until it reaches the end of the array or the window isn't "nice" anymore. This runs in >O(n^2) runtime with O(1) space which is not the most optimal algorithm (~O(n^2) using a proper sliding window by storing bits using OR and removing bits using XOR).
