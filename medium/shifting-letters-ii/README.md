
# Shifting Letters II

## Medium

Date uploaded: 8/20/22

Language: C++

Runtime: 595 ms

Memory Usage: 93.4 mb

Details: The problem is performing ranged operations on a string where we either increase or decrease letters by moving them up or down in the alphabet. My algorithm uses a segment tree to keep track of all the ranges in O(n) time by incrementing values in an array at the start and end index of each range. Then it creates a prefix sum array which spreads out all range values for the whole string before actually modifying the string characters. This runs in O(n + m) runtime and O(n) space which is the most optimal algorithm. The segment tree code I got from [this](https://www.geeksforgeeks.org/constant-time-range-add-operation-array/) GeeksForGeeks article.
