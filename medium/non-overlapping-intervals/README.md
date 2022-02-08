
# Non-overlapping Intervals

## Medium

Date uploaded: 2/8/22

Language: C++

Runtime: 750 ms

Memory Usage: 89.9 mb

Details: The problem is simply finding the amount of intervals that are needed to be removed in order for no overlapping intervals to be present. My algorithm first sorts the list of intervals based on the ends of each interval. Then the algorithm loops through all intervals keeping a flag of the last end interval it looked at in order to find all intervals that overlap. This algorithm runs in O(nlogn) runtime which is the most optimal runtime.
