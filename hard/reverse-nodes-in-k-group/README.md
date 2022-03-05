
# Reverse Nodes in k-Group

## Hard

Date uploaded: 3/5/22

Language: C++

Runtime: 19 ms

Memory Usage: 11.2 mb

Details: The problem is reversing every k group of nodes in a linked list. My solution uses the in-place reversal of a linked list algorithm to reverse every k nodes and keeps track of which nodes to connect in order to connect groups of reversed nodes. It traverses the list until it can't reverse k nodes anymore. This solution runs in O(2n) runtime with a O(1) space complexity which is most optimal algorithm.
