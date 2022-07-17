
# Minimum Window Substring

## Hard

Date uploaded: 7/17/22

Language: C++

Runtime: 19 ms

Memory Usage: 7.7 mb

Details: The problem is determining the smallest substring in a given string that contains all characters from a different given string. My algorithm uses a sliding window to iterate over the main string and keep track of all letters from the second string that appear until all letters are found. Once all letters are found it becomes a valid window and then my algorithm constricts the size of the window from the beginning of it until it no longer contains all letters from the second string. This runs in O(n + m) runtime, where n is the length of the main string and m is the length of the second string, with O(m) space which is the most optimal algorithm.
