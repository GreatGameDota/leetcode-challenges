
# Minimize XOR

## Medium

Date uploaded: 10/31/22

Language: C++

Runtime: 0 ms

Memory Usage: 6.2 mb

Details: The problem is determining a number whose XOR with a given number is as small as possible while only having the same 1 bits of another given number. My algorithm first determines the amount of bits different between the first and second number before removing or adding 1's greedily to the first number until it has the same amount of 1 bits as the second number. This runs in O(n) runtime with O(n) space which is optimal but not the most optimal (O(1) space).
