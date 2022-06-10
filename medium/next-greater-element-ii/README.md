
# Next Greater Element II

## Medium

Date uploaded: 6/10/22

Language: C++

Runtime: 55 ms

Memory Usage: 22.6 mb

Details: The problem is finding the next greater element for every element in an array and the array loops on itself so the next greater element could be before the current number in the array. My algorithm uses a monotonic stack to get every number before a big number that is less than it and set the smaller number's next greatest. However to make this work with a looping array I choose to copy the array into a 2n array, loop 2n times instead of n, and return the first have of the resulting array. This works however is not the most efficient using O(n+n+2n) runtime and O(2n) space while the most optimal algorithm runs in O(2n) with O(n) space.
