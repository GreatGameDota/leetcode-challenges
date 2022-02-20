
# Course Schedule

## Medium

Date uploaded: 2/19/22

Language: C++

Runtime: 51 ms

Memory Usage: 15.4 mb

Details: The problem is finding if it is possible to take all courses with each course possibly requiring a prerequisite. My solution converts all classes into a directed graph where each class points to its prerequisite. After this the algorithm checks if a cycle exists in the graph using recursive dfs. This algorithm runs in O(V+E) where V is the amount of nodes in the graph and E is the amount of edges. This runtime may or may not be the most optimal.
