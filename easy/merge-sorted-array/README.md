
# Merge Sorted Array

## Easy

Date uploaded: 3/15/22

Language: C++

Runtime: 0 ms

Memory Usage: 9.2 mb

Details: The problem is simply combining two sorted linked lists into one where both lists are stored into one. My algorithm uses two pointers to keep track of position in each list and a queue to store overwritten values from the first list. This algorithm runs in O(n + m) runtime which is the most optimal runtime but has a space complexity of O(n) where n is the length of the first array (excluding extra space for size of second list).
