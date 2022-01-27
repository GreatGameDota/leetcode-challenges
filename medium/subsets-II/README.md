
# Subsets II

## Medium

Date uploaded: 1/27/22

Language: C++

Runtime: 8 ms

Memory Usage: 16.6 mb

Details: The problem is the same as Subsets I but with duplicate numbers. My algorithm is exactly the same as my solution to Subsets I with two added things. To deal with the duplicates I simply sort the list initially then before recursively backtracking I skip over any duplicate numbers so they aren't counted. This has a quick runtime but may not be the most optimal.
