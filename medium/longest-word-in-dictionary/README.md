
# Longest Word in Dictionary

## Medium

Date uploaded: 2/28/22

Language: C++

Runtime: 36 ms

Memory Usage: 31 mb

Details: The problem is finding the longest word that can be constructed using given words in a list. My algorithm uses a Trie data structure to store all the words in a tree. Then I loop through all words in the word list and search it in the Trie, if it reaches the end of the word and each node as it traversed was the end of another word then it can be constructed by the list. I then just keep track of the largest word that can be constructed and if another word is the same length I keep the word that is less lexicographically. This algorithm runs in O(n*m) where n is the length of the list and m is the length of each word in the list. This is the most optimal algorithm.
