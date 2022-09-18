
# Find Original Array From Doubled Array

## Medium

Date uploaded: 9/15/22

Language: C++

Runtime: 905 ms

Memory Usage: 144.1 mb

Details: The problem is constructing the original array given a changed array where the changed array contains the original array plus all of those elements multiplied by two. My algorithm counts the frequency of all numbers in the changed array and sorts them. Then it iterates over each number frequency and counts the amount of number frequencies that are double the current number. This runs in O(nlogn) runtime with O(n) space which is optimal but not the most optimal (a O(n + klogk) runtime where k is the amount of keys in the hash table).
