
# Range Product Queries of Powers

## Medium

Date uploaded: 11/12/22

Language: C++

Runtime: 1291 ms

Memory Usage: 143.2 mb

Details: The problem is determining ranged products of numbers in a list where the list are powers of two that add up to a given number. My algorithm first determines the powers list before converting the list into prefix sum for ranged queries. Then for each range query it determines the resulting power of two from multiplying all numbers in the given range. Then it manually calculates the result and moduloing the result after every multiplication. This runs in O(n*k) where m is the amount of queries and k is the average power of two to be calculated for each query. This is optimal but not the most optimal algorithm.
