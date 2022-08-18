
# Reduce Array Size to The Half

## Medium

Date uploaded: 8/17/22

Language: C++

Runtime: 211 ms

Memory Usage: 78.4 mb

Details: The problem is determining the minimum removals of all similar elements in an array so that the size of the array is less than or equal to half the size of the original array. My algorithm first counts the frequency of all numbers in the array then adds the frequencies to a priority queue to sort them in descending order. Then the algorithm greedily removes numbers with the highest frequency inorder to minimize the number of removals. This runs in O(nlogn) runtime with O(n) space which is not the most optimal solution (which runs in O(n) runtime using bucket sort/count sort).
