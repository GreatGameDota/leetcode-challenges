
# Maximum Product of Splitted Binary Tree

## Medium

Date uploaded: 8/19/21

Language: C++

Runtime: 120 ms

Memory Usage: 78.1 mb

Details: The problem is finding the maximum product of two trees created after splitting a single binary tree. My algorithm was taken from [this](https://www.youtube.com/watch?v=hquzekas0Ug) video that did this same problem. The algorithm first traverses the tree in order to find the total sum of all the nodes in the tree. It then traverses the tree again and for each node calculates the total sum of the left and right subtrees. Using the sums it then calculates the product if you split the tree down the left and right subtrees. The algorithm takes into account previously visited nodes by using the total variable calculated earlier and subtracting one of the sums from it. This algorithm has a runtime of O(n) where n is the total nodes in the tree.
