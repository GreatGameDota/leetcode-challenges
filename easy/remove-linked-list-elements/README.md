
# Remove Linked List Elements

## Easy

Date uploaded: 1/16/22

Language: C++

Runtime: 16 ms

Memory Usage: 15 mb

Details: The problem is simply removing all instances of a target value from a linked list of numbers. My solution is a simple iterative algorithm that checks every node in the list for the target value and removes if found. I first move the head until it finds a number that isn't to be removed. Then I loop through the list looking at the next node of the current node I'm at. If I find the target value I move to the node after said target node and repeat until I get to a non-target value. This algorithm runs in O(n) runtime which is the best runtime.
