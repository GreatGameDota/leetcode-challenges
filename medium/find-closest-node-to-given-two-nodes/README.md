
# Find Closest Node to Given Two Nodes

## Medium

Date uploaded: 8/12/22

Language: C++

Runtime: 341 ms

Memory Usage: 158.8 mb

Details: The problem is determining the closest node to two given nodes in a directed graph where each node has 0 or 1 edges to another node. My algorithm traverses from each given node to all other nodes in the graph using a recursive function and keeps track of the total distance to all other nodes. Then it simply loops over all distances and finds the smallest distance to a node that both of the given nodes reach. This runs in O(n) runtime with O(n) space which is optimal but not the most optimal (which uses O(1) space).
