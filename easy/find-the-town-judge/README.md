
# Find the Town Judge

## Easy

Date uploaded: 1/3/22

Language: C++

Runtime: 332 ms

Memory Usage: 69.9 mb

Details: The problem is simply finding the number that all other numbers trust given a 2d list of trust connections between numbers. My algorithm goes through all trust connections and keeps track of the amount of connections to a number and the amount of connections a number has. Then I simply loop through all numbers and see if one has all the trust connections. This algorithm runs in O(n) (where n is length of trust connections) runtime which is the fastest runtime.
