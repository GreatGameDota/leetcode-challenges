
# Missing Number

## Easy

Date uploaded: 3/2/22

Language: C++

Runtime: 30 ms

Memory Usage: 17.9 mb

Details: The problem is simply finding the one missing number in a unordered list of numbers where the numbers are between 0 and the size of the array. My algorithm uses the swap trick where it loops through the list and for each element if its between 0 and n - 1 (where n is the size of the array) and the value in the list at the current node's value as index does not equal the current value I swap the two elements. Then it just loops over the list and if a value in the list does not equal the index its the missing number which is returned. If it gets through the whole list then it just returns n which is the only possible number that could be missing. This algorithm runs in O(2n) runtime and O(1) space which is the most optimal algorithm.
