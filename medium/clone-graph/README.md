
# Clone Graph

## Medium

Date uploaded: 2/1/22

Language: C++

Runtime: 4 ms

Memory Usage: 8.6 mb

Details: The problem is simply deep copying a undirected graph. My algorithm is uses iterative bfs to traverse all nodes and two maps to keep track of created nodes and nodes visited. For every node I loop through all the neighboring nodes adding them into the queue if they haven't been visited and copying them. This algorithm runs in O(n) runtime which is the most optimal.
