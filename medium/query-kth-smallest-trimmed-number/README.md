
# Query Kth Smallest Trimmed Number

## Medium

Date uploaded: 7/17/22 (completed the previous day)

Language: C++

Runtime: 1134 ms

Memory Usage: 289.6 mb

Details: The problem is for every given query, trimming every string in the given list by a trim amount and then determining the index of the kth smallest value from all trimmed strings. My algorithm for every query trims the string and adds it to a priority queue until the queue's size is greater than k. This runs in ~O(q \* nlogn) runtime with ~O(k \* trim) space which isn't the most optimal algorithm.
