
# Word Break

## Medium

Date uploaded: 6/19/22

Language: C++

Runtime: 74 ms

Memory Usage: 19.2 mb

Details: The problem is determining whether a given string can be made up of many strings which are given as a list. My algorithm uses bottom-up dp to explore all combinations of the substrings and find which can fit. It does this by creating a list of the length of the main string then iterating over all substrings where i is the beginning of the string and j is the end and for each checking whether its in the list of substrings. If it is, then it checks whether the current substring starts at the beginning of the word or the substring from the beginning of the word to the beginning of the substring was found to be made up of smaller substrings already. If so then it saves the current substring as a valid substring from the beginning of the word to the end of the substring else it doesn't change anything. This runs in O(n^3) runtime with O(n) space which is not the most optimal algorithm (which is changing the two for loops and adding pruning/breaks).
