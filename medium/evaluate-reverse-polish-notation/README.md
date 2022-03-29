
# Evaluate Reverse Polish Notation

## Medium

Date uploaded: 3/29/22

Language: C++

Runtime: 7 ms

Memory Usage: 11.9 mb

Details: The problem is evaluating a list of symbols as reverse Polish notation. My algorithm keeps track of current values using a stack and when it reaches an operation symbol is pops the last 2 values from the stack and performs that specific operation on them before adding the value back to the stack. This runs in O(n) runtime and with O(n) space complexity which is one of the most optimal algorithms.
