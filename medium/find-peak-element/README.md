
# Find Peak Element

## Medium

Date uploaded: 2/11/22

Language: C++

Runtime: 0 ms

Memory Usage: 8.9 mb

Details: The problem is simply finding a peak element in an array where a peak element is an element greater than its two neighbors. My algorithm uses binary search that divides up the array based on which side of the middle index has a bigger number. It then also has checks for if the middle element counts as a peak element, even when the middle element is at the beginning or end of the list. This algorithm runs in O(logn) runtime which is most optimal.
