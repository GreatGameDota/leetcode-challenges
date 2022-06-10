
# Maximum Subarray

## Easy

Date uploaded: 6/10/22

Language: C++

Runtime: 205 ms

Memory Usage: 67.8 mb

Details: The problem is finding the largest sum of a subarray of numbers from a given array. My algorithm uses a dp array to loop over the list and store the maximum of either continuing to add to a subarray, or to start a new subarray with the current number. This runs in O(n) runtime and O(1) space which is the most optimal algorithm (however this algorithm can be cleaned up with a temp variable instead of modifying the input array).
