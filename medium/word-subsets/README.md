
# Word Subsets

## Medium

Date uploaded: 8/6/22

Language: C++

Runtime: 161 ms

Memory Usage: 57.4 mb

Details: The problem is determining all "universal" strings in a given list where a string is universal if it contains all letters of every word in a second given list. My algorithm first creates a frequency table of the frequency of all characters in the second list then it iterates over all strings and counts the frequency of letters in them that only appear in the second list frequencies. This runs in O(n) runtime, where n is the length of the longest list, with O(1) space which is the most optimal algorithm.
