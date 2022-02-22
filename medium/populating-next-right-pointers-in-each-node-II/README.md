
# Populating Next Right Pointers in Each Node II

## Medium

Date uploaded: 2/22/22

Language: C++

Runtime: 12 ms

Memory Usage: 18.6 mb

Details: The problem is simply connecting every node in a binary tree with its level neighbor to the right. My algorithm is the brute force algorithm where I do a level order traversal and store pointers to each Node in an array. Then I loop through the array and connect every Node for each level together. This has a non-optimal runtime and memory complexity. The most optimal solution has a runtime of O(n) and O(1) space complexity.
