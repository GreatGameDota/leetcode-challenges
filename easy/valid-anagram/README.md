
# Valid Anagram

## Easy

Date uploaded: 6/22/22

Language: C++

Runtime: 7 ms

Memory Usage: 7.3 mb

Details: The problem is simply determining if a string is an anagram of another string where a string is an anagram of another if it contains all the same letters as the original string. My algorithm simply uses a int list of size 26 to count all the letters in the original string and then subtract from the list all the letters from the second string so that if the final array has all zeros then the second string is an anagram. This is the most optimal algorithm using O(n) runtime and O(n) space (however you can combine the first two for loops).
