
# Largest Local Values in a Matrix

## Easy

Date uploaded: 8/14/22

Language: C++

Runtime: 31 ms

Memory Usage: 11.3 mb

Details: The problem is simply creating a new matrix from a given matrix where each value is the max value if you slid a 3x3 square over the original matrix. My algorithm first slides a 3x3 square horizontally across the matrix and stores the max values in a temporary matrix. Then it does the same thing but vertical. This runs in >O(n^2) runtime with O(n) space which is optimal but not the most optimal (can have the same runtime without caching values).
