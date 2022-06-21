
# Palindromic Substrings

## Medium

Date uploaded: 6/21/22

Language: C++

Runtime: 15 ms

Memory Usage: 6.1 mb

Details: The problem is counting all substrings in a given string which are palindromes. My algorithm uses bottom-up dp to explore all substrings and determine if they are palindromes. It does this by using two for loops to get the starting and end indices of all substrings and checking whether the first and last letters are equal as well as checking if the substring between the two letters was already previously found to be a palindrome. This runs in O(n^2) runtime with O(n) space and is the most optimal algorithm.
