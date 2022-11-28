
# Find Players With Zero or One Losses

## Medium

Date uploaded: 11/28/22

Language: C++

Runtime: 1241 ms

Memory Usage: 162.6 mb

Details: The problem is determining all players with 0 or 1 losses given a list of games where there is one winner and one loser. My algorithm iterates over this list and keeps track of the amount of losses for all players in a sorted hash map. This runs in O(nlogn) runtime with O(n) space which is the most optimal algorithm.
