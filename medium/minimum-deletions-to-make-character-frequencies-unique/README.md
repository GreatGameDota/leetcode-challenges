
# Minimum Deletions to Make Character Frequencies Unique

## Medium

Date uploaded: 6/28/22

Language: C++

Runtime: 102 ms

Memory Usage: 17.1 mb

Details: The problem is determining the smallest amount of deletions of characters in a string inorder to make it so the frequency of all characters are different. My algorithm first creates a frequency array with the count of all characters in the array, then it sorts this array in descending order and finally checks all frequencies and if a value is greater than or equal to the previous it changes the value to one minus the previous. This runs in O(n) runtime with O(1) space which is the most optimal solution.
