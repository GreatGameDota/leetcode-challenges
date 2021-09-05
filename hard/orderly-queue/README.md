
# Orderly Queue

## Hard

Date uploaded: 9/5/21

Language: C++

Runtime: 16 ms

Memory Usage: 13.7 mb

Details: The problem is finding a form of the inputted string that is the most in alphabetical order when all the possible strings are just the strings where you swap a character from the beginning to the end. The amount of characters at the beginning you can move is based on another given value. I first created a brute force method which worked unless the string was above a certain length. My solution is based of the official solution, however with enough thought I would have gotten the solution as I thought it after realizing my brute force method fails. The algorithm simply looks at all permutations of the string when only swapping the first character each time if the given number is 1. Else if the given number is greater than 1, you simply return the inputted string ordered alphabetically. This algorithm has a maximum runtime of O(n) however my solution uses a slow swap method.
