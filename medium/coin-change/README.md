
# Coin Change

## Medium

Date uploaded: 7/5/22

Language: C++

Runtime: 54 ms

Memory Usage: 10 mb

Details: The problem is determining the minimum amount of coins needed to sum up to a given amount where the coins are given as a list. My algorithm uses bottom-up dp to calculate the smallest amount of coins to get every number between a certain coin value to the total amount. It does this by iterating over every coin and then it finds if a previous coin is able to get the amount faster or the minimum coins to get the current amount minus the coins value plus one of this coin is smaller. This runs in O(n*m) runtime, where n is the amount of coins and m is the total amount of value given, with O(m) space. This is the most optimal algorithm.
