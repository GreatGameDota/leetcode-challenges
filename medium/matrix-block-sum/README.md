
# Matrix Block Sum

## Medium

Date uploaded: 6/29/22

Language: C++

Runtime: 19 ms

Memory Usage: 9.1 mb

Details: The problem is calculating the square sum around every index of a given matrix where the size of the square is determined by the given value k. My algorithm first creates a 2d dp array where dp[i][j] is the total sum of the rectangle between [0][0] and [i][j]. Then it iterates over the return array and for every value in the return array calculates the sum of the k square around that index in the original matrix. It does this by first getting the total sum from [0][0] to the farthest corner of the square, then subtracting out the squares from [0][0] to the left side of the square and from [0][0] to the top side of the square, then finally adding back the top-left corner to get the total sum. This algorithm runs in O(n\*m) runtime with O(n\*m) space which is the most optimal algorithm.
