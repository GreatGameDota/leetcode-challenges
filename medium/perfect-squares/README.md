
# Perfect Squares

## Medium

Date uploaded: 7/6/22

Language: C++

Runtime: 142 ms

Memory Usage: 5.9 mb

Details: The problem is determining the minimum amount of perfect squares needed to sum up to a given value. My algorithm uses bottom-up dp to calculate the smallest amount of squares to get every number between the current square to the total amount. It does this by iterating over every square and then it finds if a square is able to get the amount faster or the minimum squares to get the current amount minus the current square plus one is smaller. This runs in O(n*sqrt(n)) runtime, where n is the value given, with O(n) space. This is the most optimal algorithm (for dp solutions).
