
# Minimum Hours of Training to Win a Competition

## Easy

Date uploaded: 8/21/22

Language: C++

Runtime: 3 ms

Memory Usage: 11 mb

Details: The problem is determining the minimum training time needed to defeat all opponents in a competition where you need to have a greater energy and experience level to win. My algorithm first determines the amount of energy needed by summing the total energies of all opponents and subtracting the sum from the starting energy value of the player. Then it iterates over all opponents' experiences and determining where the player's experience isn't enough. This algorithm runs in O(n + m) runtime with O(1) space which is the most optimal algorithm.
