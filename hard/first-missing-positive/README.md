
# First Missing Positive

## Hard

Date uploaded: 3/1/22

Language: C++

Runtime: 440 ms

Memory Usage: 132.7 mb

Details: The problem is finding the lowest missing positive integer from an unordered list of numbers. My algorithm loops through the list and counts all numbers that appear in the list as well as keeping track of the largest number (that is at least greater than 0). Then I loop in the range of valid positive integers that must show up and if one of the numbers wasn't counted then I return that number. If all numbers are accounted for then I return the size of the array + 1 which must be the only missing number. This algorithm runs in O(2n) runtime (assuming map indexing runs in O(1)) but has a space complexity of O(n) which is not the most optimal.
