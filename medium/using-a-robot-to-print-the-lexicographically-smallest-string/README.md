
# Using a Robot to Print the Lexicographically Smallest String

## Medium

Date uploaded: 11/7/22

Language: C++

Runtime: 174 ms

Memory Usage: 29.3 mb

Details: The problem is determining the lexicographically smallest string a robot can make where the robot can take a substring from the given main string then append letters from the substring to the return string starting from the end. My algorithm first counts the frequency of all letters in the given string then iterates over all letters in ascending order. For every letter, I iterate over the main given string, adding each character to the robot's substring and decreasing the letter count in the frequency table. Once I find the first instance of the current letter, I add the letter to the return string and remove it from the end of the substring. This goes on until all letters have been checked then I return the current return string plus the current substring reversed. This runs in O(n) runtime with O(n) space which is the most optimal algorithm.
