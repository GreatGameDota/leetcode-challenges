
# Equal Row and Column Pairs

## Medium

Date uploaded: 7/24/22

Language: C++

Runtime: 389 ms

Memory Usage: 42.7 mb

Details: The problem is counting the amount of row and columns that are the same in a given square matrix. My algorithm first iterates over all rows, converts them to a string and saving the string in a hash map. Then the algorithm iterates over all columns, converts them to a string and then checks if that string is in the hashmap. This runs in >O(n^2) runtime with O(n) space which is not the most optimal algorithm but is pretty optimal.
