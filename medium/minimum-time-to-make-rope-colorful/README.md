
# Minimum Time to Make Rope Colorful

## Medium

Date uploaded: 10/4/22

Language: C++

Runtime: 154 ms

Memory Usage: 95.4 mb

Details: The problem is determining the minimum cost of removing balloons where consecutive balloons of the same color get removed. My algorithm iterates over the rope and for all repeating colors, keeps track of the total cost to remove all balloons and the highest cost to remove one balloon. It then removes all balloons except the highest cost balloon which minimizes the cost to keep only one balloon of the repeated color. This runs in O(n) runtime with O(1) space which is the most optimal algorithm.
