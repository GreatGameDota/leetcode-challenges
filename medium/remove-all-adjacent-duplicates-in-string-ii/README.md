
# Remove All Adjacent Duplicates in String II

## Medium

Date uploaded: 11/20/22

Language: C++

Runtime: 34 ms

Memory Usage: 10.1 mb

Details: The problem is removing all repeating same letters that repeat k times and any subsequent repetitions after each removal. My algorithm keeps track of each letter and the amount of times it repeats in a stack. If a letter repeats more than k times at once then it is popped off the stack and any remainder repetitions added back to the stack. After iterating over the whole string the final result string is computed using what's left on the stack. This runs in O(n) runtime with O(n) space which is the most optimal algorithm.
