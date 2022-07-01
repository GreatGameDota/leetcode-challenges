
# Maximum Units on a Truck

## Easy

Date uploaded: 7/1/22

Language: C++

Runtime: 96 ms

Memory Usage: 16 mb

Details: The problem is determining the max amount of box units that can fit in a truck given the amount of each type of box and the amount of units per box. My algorithm first sorts the list of boxes by amount of units so that it can greedily take all boxes with large units per box. This runs in O(nlogn) runtime with O(1) space which is the most optimal algorithm.
