
# Coin Change 2

## Medium

Date uploaded: 7/7/22

Language: C++

Runtime: 26 ms

Memory Usage: 7.1 mb

Details: The problem is counting the amount of combinations of coins that add up to a given amount where the coins are given in a list. My algorithm uses bottom-up dp to explore all combinations of coins that add up to all numbers from the smallest coin to the final given amount. It does this by iterating over every coin and for each coin, loops from the coin's value to the final given amount and accumulates all previous values that get the current value minus the value of the current coin. This runs in O(n^2) runtime, where n is the given final amount, with O(n) space which is the most optimal algorithm.
