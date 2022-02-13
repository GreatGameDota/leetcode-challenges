
# Find K Closest Elements

## Medium

Date uploaded: 2/13/22

Language: C++

Runtime: 65 ms

Memory Usage: 31.9 mb

Details: The problem is getting k elements in a sorted list closest to a given number. My algorithm first checks base cases and simply loops across the list adding numbers to a return array. If the given number is inside the list then it does a brute force algorithm to get all the numbers. First it does a binary search to either find the number in the list or a number close to it. Then it loops for k checking each number around this middle number, including it, then adding the closest number to the given number to the return array (at the end it sorts the return array). This algorithm runs in O(nlogn) runtime which is not the most optimal runtime of O(log(n-k)).
