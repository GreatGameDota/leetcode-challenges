
# Course Schedule II

## Medium

Date uploaded: 2/20/22

Language: C++

Runtime: 23 ms

Memory Usage: 15.3 mb

Details: The problem is finding the possible order to take all courses with each course possibly requiring a prerequisite. My solution converts all classes into a directed graph where each class points to its prerequisite. After this the algorithm checks if a cycle exists in the graph using recursive dfs and adds nodes to a return array at the same time. This algorithm runs in O(V+E) where V is the amount of nodes in the graph and E is the amount of edges. This runtime may or may not be the most optimal.
