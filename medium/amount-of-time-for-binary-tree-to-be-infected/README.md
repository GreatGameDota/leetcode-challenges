
# Amount of Time for Binary Tree to Be Infected

## Medium

Date uploaded: 8/21/22

Language: C++

Runtime: 906 ms

Memory Usage: 347.6 mb

Details: The problem is determining the amount of time it'll take to infect an entire binary tree starting with one random infected node and every adjacent node to an infected node gets infected at every time step. My algorithm converts the binary tree into an undirected graph, finds the infected node, then performs dfs starting from the infected node and finds the farthest node from the infected one. This runs in O(n) runtime with O(n) space which is the most optimal algorithm (however it can be done with less memory and loops/recursive calls).
