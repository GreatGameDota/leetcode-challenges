
# Maximum Total Importance of Roads

## Medium

Date uploaded: 6/8/22

Language: C++

Runtime: 478 ms

Memory Usage: 115.9 mb

Details: The problem is determining the most optimal way to assign values to nodes in a graph so that the sum of every edge connecting them is the largest (where the value of every edge is the sum of the two nodes it connects to). My algorithm first finds the amount of edges that connect to every node, sort those values by adding them to a heap and finally looping over every value that needs to be assigned and calculating the total sum created by assigning the value to a particular node. This runs in O(m+nlogn) runtime, where m is total edges and n is total nodes, using O(n) space which is the most optimal.
