
# Longest Palindromic Substring

## Medium

Date uploaded: 6/16/22

Language: C++

Runtime: 174 ms

Memory Usage: 8.2 mb

Details: The problem is finding the longest substring in a given string where the substring is a palindrome. My algorithm uses bottom-up dp to test every substring and check if the substring is a palindrome. It does this using a 2d dp array where i and j correspond to the substring i through j in the original string and each place in the array is either true or false meaning palindrome or not. It then oops over every substring and checks if the first and last letters match and whether the center substring is a palindrome which the algorithm would have already checked. This runs in O(n^2) runtime with O(n^2) space which is not the most optimal algorithm (the 2d dp array can be changed to just 1d).
