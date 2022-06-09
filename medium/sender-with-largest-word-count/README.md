
# Sender With Largest Word Count

## Medium

Date uploaded: 6/8/22

Language: C++

Runtime: 285 ms

Memory Usage: 72.1 mb

Details: The problem is simply finding the user that has sent the most words. My algorithm uses a hash table to keep track of how many words every user has sent as well as keeping track of the user with the most words. This runs in O(n*m) where n is the amount of total messages and m is the length of the average message while using O(k) space where k is the total amount of users. This is the most optimal algorithm.
