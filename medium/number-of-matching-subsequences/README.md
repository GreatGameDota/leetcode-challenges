
# Number of Matching Subsequences

## Medium

Date uploaded: 7/20/22

Language: C++

Runtime: 182 ms

Memory Usage: 34.4 mb

Details: The problem is determining the amount of words in a list that are subsequences of a single given string. My algorithm stores all strings in a hashmap where the amount each string appears is counted. Then it iterates over the map and for each unique string iterates over the larger single string and determines if the unique string is a subsequence of the larger one. This runs in O(n * m) runtime which is the most optimal algorithm.
