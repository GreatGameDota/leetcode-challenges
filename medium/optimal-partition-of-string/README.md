
# Optimal Partition of String

## Medium

Date uploaded: 9/25/22

Language: C++

Runtime: 47 ms

Memory Usage: 10.3 mb

Details: The problem is determining the minimum amount of partitions of a string where each partition has no repeating characters. My algorithm greedily expands all partitions until it finds a repeated character where it starts the partition over again. This runs in O(n) runtime with O(1) space which is the most optimal algorithm (however my algorithm resets the map every time a partition is reset which isn't the most optimal).
