
# Remove Nth Node From End of List

## Medium

Date uploaded: 12/29/21 Updated: 7/26/22

Language: C++

Runtime: 4 ms

Memory Usage: 10.7 mb

Details: The problem is simply removing the nth node from the end of a linked list. My solution first loops through the whole list to get its size. Then it steps through the list until it gets to the node just before the node that needs to be removed. Afterwards the algorithm removes the next node while keeping the list intact. This algorithm has a runtime of O(n + k) where n is the size of the list and k is the amount of steps required to get to the node that must be removed.

Update: I added a second solution that only requires one pass which is the most optimal algorithm.
