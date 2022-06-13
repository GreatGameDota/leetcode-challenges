
# Maximum Length of Subarray With Positive Product

## Medium

Date uploaded: 6/13/22

Language: C++

Runtime: 257 ms

Memory Usage: 57.9 mb

Details: The problem is finding the longest subarray with a product of all the elements that is positive. My algorithm uses a sliding window to traverse the array and keep track of every subarray with positive product. It also skips over any zero elements and starts the window over as well as keeping track of the first negative value to appear in the window in order to calculate the length of the subarray with odd negative values. This runs in O(n) runtime with O(1) space which is the most efficient algorithm.
