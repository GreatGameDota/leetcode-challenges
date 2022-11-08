
# Make The String Great

## Easy

Date uploaded: 11/8/22

Language: C++

Runtime: 3 ms

Memory Usage: 6.3 mb

Details: The problem is editing a given string where any letter followed by its uppercase variant (or vise versa) are removed and any invalid pair created after a different pair was removed is also removed. My algorithm simply iterates over the string and builds a return string. If the current letter and next letter are invalid pairs then they are skipped, if the current letter and last letter added to the return string are invalid, the last letter in the return string is removed. This runs in O(n) runtime with O(n) space which is the most optimal algorithm.
