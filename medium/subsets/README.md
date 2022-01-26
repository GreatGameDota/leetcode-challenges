
# Subsets

## Medium

Date uploaded: 1/26/22

Language: C++

Runtime: 4 ms

Memory Usage: 15.8 mb

Details: The problem is returning all possible permutations/subsets of a list of numbers. My algorithm is a simple recursive backtracking algorithm that explores all subsets. It first adds the empty set to the return list then starts the search. The algorithm first checks the base case where the search reached the end of the list then it recursively calls itself with the same sized permutation but goes to the next number in the list. After this it adds the current number to the permutation and adds it to the return array and calls itself again with the new permutation and next number in the list. This has a quick runtime but may not be the most optimal.
