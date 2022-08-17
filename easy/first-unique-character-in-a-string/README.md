
# First Unique Character in a String

## Easy

Date uploaded: 8/16/22

Language: C++

Runtime: 30 ms

Memory Usage: 10.6 mb

Details: The problem is simply returning the index of the first letter that doesn't repeat in a string. My algorithm iterates over the string and stores the index of the first appearance of every character and if the character repeats then it clears the index value. Then my algorithm goes through all character indices and returns the smallest index. This algorithm runs in O(n) runtime with O(1) space which is the most optimal algorithm.
