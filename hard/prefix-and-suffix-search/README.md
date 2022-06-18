
# Prefix and Suffix Search

## Hard

Date uploaded: 6/18/22

Language: C++

Runtime: 686 ms

Memory Usage: 187.4 mb

Details: The problem is given a list of words, returning the last word in the list which starts with a given prefix and ends with a given suffix. My algorithm uses a Trie data structure to store all words in the list where the index where the word is in the list is saved in the final node. The main trick is for every word it stores a suffix of the word appended to the beginning of the word separated by a special character. This allows the find function to simply look in the Trie for words beginning with the suffix followed by the prefix and then doing a dfs to find all words that meet the requirement. This is an optimal and easy to follow algorithm however there are multiple ways of doing this problem all with similar runtime and space complexities.
