
# Reachable Nodes With Restrictions

## Medium

Date uploaded: 8/9/22

Language: C++

Runtime: 833 ms

Memory Usage: 196.6 mb

Details: The problem is determining the amount of nodes that can be visited starting from the 0th node and not being able to explore restricted nodes. My algorithm first creates a list of all nodes in the graph and all edges connecting every node. Then it simply does a dfs starting from the 0th node and recursively exploring all nodes connected to it, marking every visited node and not exploring restricted nodes. This is an optimal algorithm however it uses more space than the most optimal algorithm.
