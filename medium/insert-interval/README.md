
# Insert Interval

## Medium

Date uploaded: 2/9/22

Language: C++

Runtime: 55 ms

Memory Usage: 16.9 mb

Details: The problem is simply inserting a new interval into a list of intervals. My algorithm is the brute force algorithm where I first insert the new interval directly, sort the list, then iterate over the list merging any overlapping intervals. This algorithm runs in O(nlogn) runtime which is not the most optimal runtime of O(n).
