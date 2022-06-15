
# Longest String Chain

## Medium

Date uploaded: 6/15/22

Language: C++

Runtime: 114 ms

Memory Usage: 12.8 mb

Details: The problem is finding the longest chain of strings where each link in a chain is pairs of words where the second word is just the first with a letter inserted into it. My algorithm uses bottom-up dp to explore all chains and keep track of the longest valid chain. It does this by first sorting the list of words from shortest to longest lengths, looping over every word, and for every word: looping from that word to the end of the list checking what words connect to the current chain. The lengths of each chain is then kept track of in the dp array so when a new word is added to the chain its just the length of the current chain plus 1. This runs in O(n^2 * m), where m is the average length of all words in the list, and O(n) space which isn't the most optimal solution of O(n \* m^2) and O(nm) (which uses a hashmap and iterates through all substrings of each word with 1 letter removed).
