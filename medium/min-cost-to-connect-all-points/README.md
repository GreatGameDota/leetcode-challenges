
# Min Cost to Connect All Points

## Medium

Date uploaded: 4/26/22

Language: C++

Runtime: 256 ms

Memory Usage: 26.9 mb

Details: The problem is finding the smallest sum of all connections to points on a grid where each connection has a value of the distance between the two points. My algorithm creates an edge graph of all the points and then performs the minimum spanning tree algorithm on them to find the smallest connections between all the points. It then just sums all the connections. My algorithm uses Prim's Minimum Spanning Tree algorithm which I directly copied from [GeeksforGeeks](https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/). This is the most optimal algorithm.
