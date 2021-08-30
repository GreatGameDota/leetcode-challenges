
# K Closest Points to Origin

## Medium

Date uploaded: 8/28/21

Language: C++

Runtime: 192 ms

Memory Usage: 57.6 mb

Details: The problem is simply finding the k closest points to the origin. I used a minheap implementation from [here](https://www.geeksforgeeks.org/implement-min-heap-using-stl/). My algorithm runs in O(n) runtime where n is the amount of points given. A slightly faster solution is changing the distance algorithm to remove the sqrt function.
