
# Number of Islands

## Medium

Date uploaded: 2/2/22

Language: C++

Runtime: 56 ms

Memory Usage: 12.3 mb

Details: The problem is simply finding all islands giving a 2d array of 1's and 0's. My algorithm simply searches the array until it finds a 1 then it calls a recursive dfs to find and erase all 1's connected to the 1 found. When it finds a new 1 it increments a counter that represents the numbers of found islands. This runs in O(mn) runtime, where m and n are the dimensions of the 2d array, which is the most optimal runtime and algorithm.
