
# Maximum Binary Tree

## Medium

Date uploaded: 2/25/22

Language: C++

Runtime: 99 ms

Memory Usage: 39.2 mb

Details: The problem is converting a list of numbers into a binary tree. Each node in the tree is based on the largest number in the list. The root is the largest number and all numbers to the left of this number in the list will go on the left side of the binary tree and same for the right side. The numbers to the left and right and then sorted to the left and right using the same rules. My algorithm recursively does this sorting by finding the max numbers to the left and right of a partition and building a binary tree then recursively calling itself with a smaller window/partition. This algorithm runs in >O(n) runtime which is not the most optimal.
