
# Find All Anagrams in a String

## Medium

Date uploaded: 7/15/22

Language: C++

Runtime: 12 ms

Memory Usage: 8.7 mb

Details: The problem is finding all substrings in a given string which are anagrams of a smaller given string. My algorithm uses a sliding window with the same length as the smaller string and slides it over the whole larger string. Then for each windowed substring it keeps track of the count of all the letters in this substring and compares it with the count of the given small string. This runs in O(26n) runtime, where n is the length of the larger string, with O(1) space. This is the most optimal algorithm.
