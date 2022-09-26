
# Divide Intervals Into Minimum Number of Groups

## Medium

Date uploaded: 9/25/22

Language: C++

Runtime: 1031 ms

Memory Usage: 88.8 mb

Details: The problem is determining the minimum number of groups of intervals so that no intervals overlap. My algorithm greedily groups intervals together as long as an interval does not overlap with the shortest previous interval else it creates a new group. My algorithm first sorts the intervals then adds each interval into a min heap to keep track of the oldest interval added. This algorithm runs in O(nlogn) runtime with O(n) space which is the most optimal algorithm.
