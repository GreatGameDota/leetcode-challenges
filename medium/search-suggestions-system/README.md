
# Search Suggestions System

## Medium

Date uploaded: 6/19/22

Language: C++

Runtime: 165 ms

Memory Usage: 76.2 mb

Details: The problem is getting the top 3 search results in a given list for each letter in a given search query. My algorithm uses a Trie to store all words in the list. Then for each letter it searches the Trie for words beginning with that string then performs a dfs from the last letter to find the first 3 words that match it and are lexicographically smallest. This is an optimal algorithm however there might be more optimal ones.
