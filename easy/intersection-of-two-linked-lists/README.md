
# Intersection of Two Linked Lists

## Easy

Date uploaded: 3/31/22

Language: C++

Runtime: 74 ms

Memory Usage: 18 mb

Details: The problem is simply finding the point at which two linked lists combine into one. My algorithm uses a unordered map to keep track of what nodes the first linked list has and then steps through the second linked list until it finds a node that is also in the first list. This algorithm runs in O(n+m) runtime but has a space complexity of O(n) which is not the most optimal.
