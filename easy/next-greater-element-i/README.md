
# Next Greater Element I

## Easy

Date uploaded: 6/8/22

Language: C++

Runtime: 8 ms

Memory Usage: 8.9 mb

Details: The problem is simply finding the next element to appear in an array from a given number that is greater than the given number and do that for multiple given numbers. My solution uses a hash table and monotonic stack to keep track of when a number is found that is larger than the previous and save that element as the next greater for all the smaller previous elements. This runs in O(n+m) runtime, where n is length of given numbers to find the next greater and m is length of all numbers, with O(m) space complexity which is the most optimal algorithm.
