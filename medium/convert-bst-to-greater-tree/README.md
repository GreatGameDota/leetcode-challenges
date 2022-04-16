
# Convert BST to Greater Tree

## Medium

Date uploaded: 4/16/22

Language: C++

Runtime: 35 ms

Memory Usage: 33.4 mb

Details: The problem is converting a bst to a greater tree where each node's values are replaced with the total sum of all nodes to the right of it. My algorithm simply uses recursive dfs to traverse the tree. It traverses down the right subtree first and after accumulates a sum variable thats passed between all recursive calls and then it sets the current nodes value to sum. This is the most optimal algorithm however it uses O(n) space when the most optimal algorithm uses O(1).
