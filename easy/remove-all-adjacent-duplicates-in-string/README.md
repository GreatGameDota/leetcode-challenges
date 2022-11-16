
# Remove All Adjacent Duplicates In String

## Easy

Date uploaded: 11/15/22

Language: C++

Runtime: 61 ms

Memory Usage: 10.9 mb

Details: The problem is determining the final string after removing all consecutive duplicates in a given string. My algorithm uses the resulting string like a stack and compares the last value in the resulting string with the current value in the given string as the algorithm iterates over the given string. If the two characters are the same, the character is popped off the back of the result string. This runs in O(n) runtime with O(1) space which is the most optimal algorithm.
