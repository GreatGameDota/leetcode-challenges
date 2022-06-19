
# Greatest English Letter in Upper and Lower Case

## Easy

Date uploaded: 6/19/22

Language: C++

Runtime: 16 ms

Memory Usage: 7.1 mb

Details: The problem is simply finding the largest alphabetically letter in a string that appears both lowercase and uppercase atleast once. My algorithm loops over the string and keeps track of all visited letters by keeping them in a hash table and then checks if the lower or uppercase variant of a letter had already been seen. This runs in O(n) runtime with O(n) space.
