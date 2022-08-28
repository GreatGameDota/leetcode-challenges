
# Minimum Amount of Time to Collect Garbage

## Medium

Date uploaded: 8/28/22

Language: C++

Runtime: 292 ms

Memory Usage: 102.2 mb

Details: The problem is determining the time it takes for all garbage to be collected where each garbage takes 1 minute to collect and the travel time to each house is given in a travel array. My algorithm brute force calculates the time to collect each type of garbage by counting the amount of each type of trash is at each location and keeping track of the total travel time to each house. This runs in O(n*m) runtime with O(1) space which is optimal but can be optimized further.
