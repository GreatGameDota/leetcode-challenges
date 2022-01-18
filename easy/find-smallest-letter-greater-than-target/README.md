
# Find Smallest Letter Greater Than Target

## Easy

Date uploaded: 1/18/22

Language: C++

Runtime: 27 ms

Memory Usage: 16 mb

Details: The problem is simply using binary search to find a target letter from a list and return the smallest letter greater than it. My algorithm uses binary search to find the target (or a letter near it) then I search for the smallest letter greater than it. This algorithm adds an extra loop so it does not run in O(logn) but O(n) worst case.
