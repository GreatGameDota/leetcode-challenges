
# Replace Elements in an Array

## Medium

Date uploaded: 6/7/22

Language: C++

Runtime: 667 ms

Memory Usage: 129.2 mb

Details: The problem is modifying a list based on a given list of operations where you replace a number in the list with a given number. My algorithm uses a hash table to store all the indexes of ever number in the list. Then it performs every operation by retrieving the index of the number that needs to change, changing it, then updating the index of where the new number was placed. This runs in O(m+n) runtime and O(n) space which is the most optimal algorithm.
