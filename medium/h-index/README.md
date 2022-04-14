
# H-Index

## Medium

Date uploaded: 4/14/22

Language: C++

Runtime: 0 ms

Memory Usage: 8.6 mb

Details: The problem is finding the h value given a list of numbers representing citations on research papers. My algorithm first sorts the list then searches all h values starting with the max value. For each h value it searches from the end of the list and counts the amount of papers that are valid, once it finds a paper that isn't valid it stops and checks if the amount found is greater than or equal to the h value and returns if true. This isn't the most optimal algorithm but has a fast runtime and O(1) space complexity.
