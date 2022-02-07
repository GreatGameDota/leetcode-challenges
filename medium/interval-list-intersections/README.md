
# Interval List Intersections

## Medium

Date uploaded: 2/7/22

Language: C++

Runtime: 70 ms

Memory Usage: 21.8 mb

Details: The problem is finding the intersection intervals of two separate interval lists. My solution is brute force where I combine both intervals into one list, sort them, then use an algorithm to merge the intervals that overlap. As I'm merging the intervals I add the interval where they intersect. This runs in O(nlogn) runtime which is far the from optimal runtime of O(n) where n is length of both lists combined.
