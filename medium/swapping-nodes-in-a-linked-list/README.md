
# Swapping Nodes in a Linked List

## Medium

Date uploaded: 4/4/22

Language: C++

Runtime: 927 ms

Memory Usage: 180.1 mb

Details: The problem is swapping two nodes in a linked list given an index and swapping the opposite node from it. My algorithm uses fast and slow pointers to get to the middle of the list and get the left node that needs to be swapped. If the left node is found then it continues traversing the list from the middle to get the right node and swaps them. If the left node was not found then it changes k to appear in the first half of the list and calls the function again to start over. This algorithm is not the most optimal but uses O(1) space complexity.
