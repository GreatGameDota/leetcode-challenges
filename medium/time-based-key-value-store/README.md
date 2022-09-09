
# Time Based Key-Value Store

## Medium

Date uploaded: 9/8/22

Language: C++

Runtime: 739 ms

Memory Usage: 129.7 mb

Details: The problem is creating a data structure to store key value pairs with timestamps and obtain values based on a key and the closest timestamp to a given timestamp that is less than or equal to it. My algorithm stores values in a nested map inside another map as well as the timestamps in a separate map with ordered timestamps for each key. Then to obtain a value it uses binary search to find the largest timestamp that is less than or equal to the given timestamp. This runs in O(1),O(logn) runtime, where n is the amount of timestamps per value, with O(m*n) space, where m is the amount of values.
