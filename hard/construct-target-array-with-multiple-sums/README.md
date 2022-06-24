
# Construct Target Array With Multiple Sums

## Hard

Date uploaded: 6/24/22

Language: C++

Runtime: 75 ms

Memory Usage: 28.6 mb

Details: The problem is determining whether a target array can be constructed starting from a ones array of the same size where each operation is changing an index in the array by the sum of the current array. My algorithm uses a max heap to keep track of the largest number in the target array and for each of the largest values, it checks if the sum of the rest of the list is greater than the largest value or the sum is zero and if so then the list cannot be reduced to a ones array. Else the algorithm reduces the largest value down to the smallest value possible based on the rest of the list by computing the modulo and adding back the new value if it is not one. This algorithm runs in O(nlogn) runtime with O(n) space which is the most optimal algorithm.
