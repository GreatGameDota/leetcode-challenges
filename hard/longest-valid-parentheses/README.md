
# Longest Valid Parentheses

## Hard

Date uploaded: 6/13/22

Language: C++

Runtime: 6 ms

Memory Usage: 7.3 mb

Details: The problem is finding the longest substring in a given string of open and closed parenthesrs which contains valid parentheses. My algorithm first iterates over the string and finds all valid pairs of parentheses using a stack and for each valid pair keeps another array of where the pairs appear. Then I iterate over the array of all pairs and find the largest area of valid pairs. This runs in O(2n) runtime with O(2n) space which is optimal but not the most optimal (O(1) space).
