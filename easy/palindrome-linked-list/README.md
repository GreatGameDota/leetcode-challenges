
# Palindrome Linked List

## Easy

Date uploaded: 8/23/22

Language: C++

Runtime: 355 ms

Memory Usage: 114.1 mb

Details: The problem is simply determining if a linked list of numbers is a palindrome. My algorithm first uses fast-slow pointers to find the middle of the linked list. Then it performs in-place reversal of the first half of the linked list before iterating 2 pointers starting at the beginning and middle of the linked list and check if all values match. This runs in O(n) runtime with O(1) space which is the most optimal solution.
