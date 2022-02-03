
# Reverse Linked List II

## Medium

Date uploaded: 2/3/22

Language: C++

Runtime: 7 ms

Memory Usage: 7.4 mb

Details: The problem is simply reversing a sub part of a linked list given the window to be reversed. My algorithm first steps through the list until it gets to the node right before the window. Then it loops the length of the window doing an in place reversal of all nodes in the window. After I connect the beginning and end of the window with the rest of the list. This algorithm runs in worst case O(n) runtime with O(1) memory.
