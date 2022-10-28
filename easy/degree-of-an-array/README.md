
# Degree of an Array

## Easy

Date uploaded: 10/28/22

Language: C++

Runtime: 62 ms

Memory Usage: 26.2 mb

Details: The problem is determining the smallest contiguous sub array that contains all instances of a number that has the highest frequency in the whole array. My algorithm iterates over the array and keeps track of the frequency of all numbers as well as the highest frequency amount and the first and last indices of every unique number. Then it iterates over all frequencies and determines the length of every sub array for all numbers that have the highest frequency. This runs in O(n) runtime with O(n) space which is the most optimal algorithm.
