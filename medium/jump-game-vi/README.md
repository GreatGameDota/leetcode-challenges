
# Jump Game VI

## Medium

Date uploaded: 7/9/22

Language: C++

Runtime: 325 ms

Memory Usage: 81.9 mb

Details: The problem is determining the max cost to traverse from the beginning of the array to the end where each step is 1 to k size and the cost is the sum of all elements traversed. My algorithm uses bottom-up dp to explore from the end of the array and keep track of the largest costs for each element in the array. It does this by looping from the end of the array and keeping track of the largest cost of the previous i to i + k elements and adding that with the current value in the array. This runs in O(nlogk) runtime with O(n) space which is not the most optimal algorithm (which is O(n) runtime and space).
