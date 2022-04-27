
# Smallest String With Swaps

## Medium

Date uploaded: 4/27/22

Language: C++

Runtime: 277 ms

Memory Usage: 83.4 mb

Details: The problem is finding the smallest string after performing any amount of given swaps. My algorithm creates a graph with all characters being nodes and each connected by the possible swaps between them. I then use bfs to collect all nodes that are connected with each other, sort them, and replace the node values with the sorted values. This isn't the most optimal algorithm as union find does the same but better.
