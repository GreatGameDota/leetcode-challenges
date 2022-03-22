
# Smallest String With A Given Numeric Value

## Medium

Date uploaded: 3/22/22

Language: C++

Runtime: 28 ms

Memory Usage: 21.2 mb

Details: The problem is constructing a string of characters given a length and score value that the string must match. Each letter has its own score value and the string must be the minimum valid string in lexicographical order. My algorithm greedily fills the last letters with z's until either k is less than 26 or until there are more empty spaces than the current score (k). Then it fills in letters based on how many more empty spaces there are until the amount left is equal to the score wherein the rest of the spaces can stay as a. This isn't as small as some other solutions but is just as efficient, O(n) runtime, O(1) space (not counting return string).
