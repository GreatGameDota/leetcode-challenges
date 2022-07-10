
# Smallest Number in Infinite Set

## Medium

Date uploaded: 7/10/22

Language: C++

Runtime: 178 ms

Memory Usage: 35 mb

Details: The problem is creating a data structure to store an infinite set of numbers, return the smallest current number in the set and add new numbers to the back of it. My algorithm uses a pointer and a priority queue to keep track of the current smallest number and if a number is added thats smaller than the pointer it'll be added to the priority queue. This runs in O(logn) runtime for both functions which is the most optimal algorithm.
