
# Design a Number Container System

## Medium

Date uploaded: 7/23/22

Language: C++

Runtime: 642 ms

Memory Usage: 162.3 mb

Details: The problem is creating a data structure to store numbers at specific indices and then return the smallest index the number appears at. My algorithm uses a ordered map to store all the numbers in and then does a linear search over the map to find the first occurrence of a given number. This runs in O(1) & O(n) runtime with O(n) space which is not the most optimal solution (and should TLE; while the most optimal solution uses 2 maps with O(1) runtime for both functions).
