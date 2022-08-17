
# Rotting Oranges

## Medium

Date uploaded: 8/16/22

Language: C++

Runtime: 14 ms

Memory Usage: 16.3 mb

Details: The problem is determining the minimum amount of minutes for all ripe oranges to become rotten where a ripe orange will become rotten after 1 minute if its next to a rotten one (where oranges are placed randomly in a 2d matrix). My algorithm uses bfs to traverse the matrix starting from all rotten oranges and determining the highest step count to reach a ripe orange. This algorithm runs in O(n^2) runtime with O(n^2) space which is the most optimal algorithm.
