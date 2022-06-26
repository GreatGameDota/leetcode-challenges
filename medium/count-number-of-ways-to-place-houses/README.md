
# Count Number of Ways to Place Houses

## Medium

Date uploaded: 6/26/22

Language: C++

Runtime: 5 ms

Memory Usage: 6 mb

Details: The problem is counting the amount of ways to place 2n houses on two sides of a n size street where no two houses can be next to each other on the same side of the street. My algorithm simply calculates the amount of ways to place houses on one side of the street just by calculating the n + 2 fibonacci number and then the final count is just all possible combinations of placing houses on either side of the street which is just squaring the number for one side of the street. This runs in O(n) runtime with O(1) space which is the most optimal algorithm.
