
# Maximal Square

## Medium

Date uploaded: 6/30/22

Language: C++

Runtime: 138 ms

Memory Usage: 16.4 mb

Details: The problem is finding the largest square of 1's in a given matrix of 0's and 1's. My algorithm uses bottom-up dp to explore all appearances of 1's and check whether a 1 is apart of a square or not. It does this by keeping track of the current and previous rows checked and if an element is 1, saves that it is a one along with checking if the elements to the left, above and top-left of the current 1 are also 1's. This runs in O(n*m) runtime with O(m) space which is the most optimal algorithm.
