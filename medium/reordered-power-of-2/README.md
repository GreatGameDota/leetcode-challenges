
# Reordered Power of 2

## Medium

Date uploaded: 8/26/22

Language: C++

Runtime: 0 ms

Memory Usage: 6.2 mb

Details: The problem is determining whether a given number's digits can be reordered so that the new number is a power of 2. My algorithm first counts all the digits in the given number then iterates over every power of two until it reaches numbers with the same length as the given number. Then for each possible power of 2 it does the same digit counting and sees if both numbers have the same digits. This runs in O(log^2 n) runtime with O(logn) space which is optimal but not the most optimal (can use slightly less space for every power of 2 candidate).
