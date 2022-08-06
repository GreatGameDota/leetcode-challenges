
# Find and Replace Pattern

## Medium

Date uploaded: 7/29/22

Language: C++

Runtime: 0 ms

Memory Usage: 7.8 mb

Details: The problem is determining what strings in a given lists match a pattern shown in a given string where a pattern is the amount of repeated letters. My algorithm first converts the string to a pattern string where each letter is converted into a specific value that is the same for every repeating letter. Then it loops over all the strings and for each builds the same pattern string and compares it with the master pattern string. This runs in O(n\*l) runtime, where l is the average length of every string, with O(n\*l) space which is the most optimal algorithm.
