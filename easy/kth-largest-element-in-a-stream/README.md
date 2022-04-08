
# Kth Largest Element in a Stream

## Easy

Date uploaded: 4/8/22

Language: C++

Runtime: 164 ms

Memory Usage: 21.3 mb

Details: The problem is simply finding the kth greatest element in a given list after adding an element. My algorithm stores the list in a binary search tree and searches for a given kth greatest element. This isn't the most optimal solution because I misread the question and built the tree to handle any k value however k is the same at all times. The most optimal solution is just using a priority queue which I started out with originally. My current solution runs in O(n^2) and O(2n) runtime for the two functions respectively (because I don't keep the bst balanced).
