
# Serialize and Deserialize Binary Tree

## Hard

Date uploaded: 8/13/22

Language: C++

Runtime: 93 ms

Memory Usage: 37.2 mb

Details: The problem is serializing a binary tree into a single string and then using that string to rebuild the same tree. My algorithm serializes by doing a level-order traversal to create a list of node values. Then to deserialize my algorithm converts the string back into a list of node values then performs a modified level-order traversal to recreate the binary tree. This runs in O(n) runtime with O(n) space which is optimal but not the most optimal (which uses less memory and runtime).
