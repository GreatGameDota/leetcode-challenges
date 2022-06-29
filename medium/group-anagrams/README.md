
# Group Anagrams

## Medium

Date uploaded: 6/28/22

Language: C++

Runtime: 44 ms

Memory Usage: 19.3 mb

Details: The problem is grouping all anagrams of the same letters together from a list of strings. My algorithm loops over all the strings, sorts them and adds the string to a list based on how its letters are ordered. Then it just loops over the map adding all lists to a return array. This runs in O(n \* klogk), where k is the average length of all strings in the array, with O(n) space. This is one of the more optimal algorithms (it can run in O(n\*k) however its >1 loop).
