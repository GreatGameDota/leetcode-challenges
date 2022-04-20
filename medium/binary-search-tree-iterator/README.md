
# Binary Search Tree Iterator

## Medium

Date uploaded: 4/20/22

Language: C++

Runtime: 39 ms

Memory Usage: 24.2 mb

Details: The problem is creating an iterator that performs in order traversal of a binary tree. My algorithm simply performs an in order traversal and stores each value in a list then it returns the value from the list when the iterator asks for a value. This is not the most optimal algorithm as it takes O(n) to traverse the tree and takes O(n) space to store it in order however the next() and hasNext() functions both run in O(1) runtime and O(1) space. The most optimal algorithm is to store all left nodes in a stack and whenever a node is popped off you store all left nodes in the right node of the node removed.
