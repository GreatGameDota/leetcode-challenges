
# Bitwise XOR of All Pairings

## Medium

Date uploaded: 10/18/22

Language: C++

Runtime: 148 ms

Memory Usage: 60.6 mb

Details: The problem is determining the total XOR of all XOR values between all possible pairs from two given arrays of numbers. My algorithm simply accumulates the XOR of each list based on whether the length of the other list is odd or even. This runs in O(max(n,m)) runtime with O(1) space which is the most optimal algorithm.