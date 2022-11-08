
# Find The Original Array of Prefix Xor

## Medium

Date uploaded: 11/7/22

Language: C++

Runtime: 330 ms

Memory Usage: 79.2 mb

Details: The problem is determining the original array of numbers whose XOR of the first i numbers equals the i'th number in a given list. My algorithm solves the equation array\[i\] ^ x = array[i - 1] where array is the given array which is the same as x = array[i - 1] ^ array\[i\]. This runs in O(n) runtime with O(n) space which is optimal but not the most optimal (O(1) space).
