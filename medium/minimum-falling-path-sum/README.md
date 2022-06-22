
# Minimum Falling Path Sum

## Medium

Date uploaded: 6/22/22

Language: C++

Runtime: 10 ms

Memory Usage: 10 mb

Details: The problem is finding the minimum cost path to go from the top of a matrix to the bottom, where the cost is the sum of all the numbers traversed, but only being able to traverse to the next three numbers in the next row from the current number. My algorithm uses bottom-up dp to explore all paths from the end of the matrix to the beginning and find the minimum path. It does this by iterating on two for loops which traverses the matrix, calculating the smallest cost to move from the previous row to the current number, and saving the cost in the dp array. This runs in O(n^2) runtime with O(n) space which is the most optimal solution without modifying the input array (which makes it O(1) space).
