
# Reorder List

## Medium

Date uploaded: 1/31/22 Updated: 7/26/22

Language: C++

Runtime: 68 ms

Memory Usage: 18.2 mb

Details: The problem is reordering a linked list where the first half of the list is spread out and the last half of the list is reversed and inserted between the first numbers. My algorithm uses two pointers to store the first half and second half of the list in two data structures. Then it sloops through again placing the first half and second half in the proper places in the list. This runs in O(n) runtime.

Update: I added a solution which runs in O(n/2) runtime with O(n/2) space using a single stack and 3 loops which is not the most optimal algorithm but is near it (where the most optimal algorithm uses O(1) space).
