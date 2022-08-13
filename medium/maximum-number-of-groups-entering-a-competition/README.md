
# Maximum Number of Groups Entering a Competition

## Medium

Date uploaded: 8/12/22

Language: C++

Runtime: 150 ms

Memory Usage: 56.5 mb

Details: The problem is determining the most amount of groups of numbers that meet the two requirements: each having a total sum larger than the previous and having more numbers than the previous. My algorithm first sorts the list then greedily groups every number into groups of 1 then 2 then 3 etc. This algorithm runs in O(nlogn) runtime with O(1) space which is not the most optimal algorithm (which has O(1) runtime using math because its guaranteed that each group will meet the requirements so the amount is bounded by the size of the array).
