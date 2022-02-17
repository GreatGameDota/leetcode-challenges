
# Kth Largest Element in an Array

## Medium

Date uploaded: 2/17/22

Language: C++

Runtime: 14 ms

Memory Usage: 10.4 mb

Details: The problem is simply finding the kth largest element in an array. My algorithm uses a heap to sort every element in the array then loops k popping an element from the top of the heap. This runs in O(nlogn) or O(nlogk) which is not the most optimal runtime of O(n).
