
# Convert Sorted Array to Binary Search Tree

## Easy

Date uploaded: 8/10/22

Language: C++

Runtime: 15 ms

Memory Usage: 20.5 mb

Details: The problem is simply converting a sorted array into a balanced bst. My algorithm uses a recursive divide and conquer approach to divide the list in half and keep divided each division until the length of a division is 1 or 0. This algorithm runs in O(nlogn) runtime with O(n) space which is optimal but not the most optimal (O(n) runtime).