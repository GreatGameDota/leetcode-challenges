
# Longest Substring Without Repeating Characters

## Medium

Date uploaded: 8/21/21

Language: C++

Runtime: 4 ms

Memory Usage: 7 mb

Details: The problem is a common problem where you need to find the longest sequence of elements without any repeats. The final algorithm is my own implementation of the algorithm found [here](https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/). This algorithm loops through the string once and keeps track of what index a character appears at. This then allows it to adjust the sequence to where it last occurred when a certain character repeats. This algorithm has a runtime of O(n).
