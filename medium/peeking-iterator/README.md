
# Peeking Iterator

## Medium

Date uploaded: 4/25/22

Language: C++

Runtime: 3 ms

Memory Usage: 7.7 mb

Details: The problem is simply designing a new class that adds a peek function to an iterator to get the next value without incrementing the pointer. My solution simply just creates a copy of the iterator and calls next on the copy. This isn't the most optimal solution since it uses O(n) space.
