
# Insertion Sort List

## Medium

Date uploaded: 3/28/22

Language: C++

Runtime: 20 ms

Memory Usage: 9.6 mb

Details: The problem is simply doing an in-place insertion sort on a linked list. My algorithm loops starting from the second node and for each node it first checks if its greater than the greatest sorted node. If it is, then it just skips to the next node. Else it starts another loop from the beginning of the list and finds where to insert the current node. This might not be the most optimal algorithm but it beats most submissions in runtime and memory.
