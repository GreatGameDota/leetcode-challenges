
# Maximum Matching of Players With Trainers

## Medium

Date uploaded: 9/27/22

Language: C++

Runtime: 274 ms

Memory Usage: 76.6 mb

Details: The problem is finding the maximum pairs of numbers from two arrays where a pair can be made if the first number is less than or equal to the second. My algorithm first sorts both arrays and then for each player it iterates over the trainers and finds the first trainer thats greater than the player. This algorithm runs in O(min(n,m)) runtime with O(1) space which is the most optimal algorithm.
