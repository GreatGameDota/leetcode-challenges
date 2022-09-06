
# Strictly Palindromic Number

## Medium

Date uploaded: 9/6/22

Language: C++

Runtime: 0 ms

Memory Usage: 6 mb

Details: The problem is determining whether the representation of a given number in all the bases from 2 to n - 2 are all palindromes. My algorithm converts the number into a string representation of the number for all bases and checks each to see if its a palindrome. This algorithm doesn't work because a base of 10 or more produces an error however for this problem it'll always return false before it gets there. My algorithm runs in ~O(n) runtime with ~O(n) space which isn't the most optimal algorithm (which is just returning false).
