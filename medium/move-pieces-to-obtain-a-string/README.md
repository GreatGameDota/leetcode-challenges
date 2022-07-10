
# Move Pieces to Obtain a String

## Medium

Date uploaded: 7/10/22

Language: C++

Runtime: 62 ms

Memory Usage: 19 mb

Details: The problem is determining whether a given string can be made like the target string by only moving 'L' characters to the left and 'R' characters to the right. My algorithm iterates over both strings and finds pairs of either L or R characters in both strings. Then if a L appeared before a target R, a L appeared before a target L, or a R appeared after a target R then the target string cannot be constructed. This runs in O(n) runtime with O(1) space which is the most optimal algorithm.
