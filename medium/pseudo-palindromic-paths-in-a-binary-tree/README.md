
# Pseudo-Palindromic Paths in a Binary Tree

## Medium

Date uploaded: 9/14/22

Language: C++

Runtime: 380 ms

Memory Usage: 181 mb

Details: The problem is determining the total amount of root-to-leaf paths where all the digits that make up the path can be arranged to be palindromic. My algorithm uses recursive dfs to iterate over the tree and keep track of the frequency of all digits. When the algorithm reaches a leaf it counts the frequencies of all digits from 1-9 and counts how many occur in an odd amount and if the odd amount is 0 or 1 than its a palindromic path. This algorithm runs in O(n) runtime with O(h) space which is the most optimal algorithm.
