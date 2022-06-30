
# Minimum Moves to Equal Array Elements II

## Medium

Date uploaded: 6/30/22

Language: C++

Runtime: 17 ms

Memory Usage: 10.9 mb

Details: The problem is finding the minimum number of operations to make all elements of an array the same where one operation is increasing or decreasing any number by 1. My algorithm simply sorts the list in order to find the median then finds the sum of the difference between every number and that median. This runs in O(nlogn) runtime with O(1) space which is not the most optimal algorithm (which is O(n) using nth_element/quick select).
