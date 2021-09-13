
# 3sum Closest

## Medium

Date uploaded: 9/13/21

Language: C++

Runtime: 22 ms

Memory Usage: 9.9 mb

Details: The problem is finding triplets in a list of numbers whose sum gets the closest to a target value. My algorithm is the same as the 3sum problem where it first sort the input numbers. Then it loops through the whole array and for each number makes it the first triplet. Then it searches through the whole array and finds two sets of numbers which, along with the first number, add up to a number. For every number the algorithm checks if its the closest to the target and if the number is the target it returns target. This algorithm has a total runtime of O(n^2).
