
# Product of Array Except Self

## Medium

Date uploaded: 7/2/22

Language: C++

Runtime: 31 ms

Memory Usage: 23.9 mb

Details: The problem is determining the product of all numbers besides the current element for every element in a given array. My algorithm first creates a prefix product of all the elements at the same time checking if there are any zero elements. Then it loops over the array and calculates the product of everything except the current element by first dividing the total product by the current element to get the product of arr[i + 1] - arr[n - 1] and then multiplying that value by the previous value in the prefix product array which is arr\[0\] - arr[i - 1]. This runs in O(2n) runtime with O(1) space which is the most optimal algorithm (however it can be done in one pass).
