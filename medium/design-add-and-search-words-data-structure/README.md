
# Design Add and Search Words Data Structure

## Medium

Date uploaded: 4/6/22

Language: C++

Runtime: 1168 ms

Memory Usage: 563.9 mb

Details: The problem is creating a data structure that can store words and search for a given word including wildcards where any letter can be used. My algorithm uses a trie data structure to store all the letters in a tree. Only difference between a normal trie is the search function which recursively searches all added letters in the tree when there is a '.' wildcard in the given word. This is the most optimal trie algorithm for this problem.
