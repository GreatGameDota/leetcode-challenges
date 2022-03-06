
# Merge k Sorted Lists

## Hard

Date uploaded: 3/6/22

Language: C++

Runtime: 34 ms

Memory Usage: 14 mb

Details: The problem is simply merging k sorted linked lists into one big sorted linked list. My first solution uses a heap to store and order all values in the lists then I construct the new list using those values. This has a fast runtime (Nlogk where N is length of all lists combined) but uses a lot of memory (O(N)) (unless you change to create new list in-place which would be O(k) space). My second solution simply counts each value in all the lists and finds the lowest value to add to the new list. This solution has a slower runtime (O(kN) where N is length of all lists combined) but has O(1) space complexity.
