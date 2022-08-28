
# Removing Stars From a String

## Medium

Date uploaded: 8/28/22

Language: C++

Runtime: 115 ms

Memory Usage: 26.9 mb

Details: The problem is constructing the resulting string after all star characters remove the first none star character to the left of it. My algorithm puts every character in the string into a stack and for each star character pops the last character out of the stack. This runs in O(n) runtime with O(n) space which isn't the most optimal algorithm (which uses O(1) space).
