
# Max Sum of a Pair With Equal Sum of Digits

## Medium

Date uploaded: 7/17/22 (completed the previous day)

Language: C++

Runtime: 301 ms

Memory Usage: 60 mb

Details: The problem is determining the maximum sum from two numbers whose digits sum to the same number. My algorithm uses a hashmap to store the index of the largest number whose digits sum to a specific value and if a sum has already been saved in the hashmap the sum of the current number and the number saved in the map are checked to see if its the largest sum so far. This runs in O(n) runtime with O(n) space which is the most optimal algorithm.
