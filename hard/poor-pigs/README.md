
# Poor Pigs

## Hard

Date uploaded: 8/6/22

Language: C++

Runtime: 3 ms

Memory Usage: 6.2 mb

Details: The problem is determining the minimum amount of pigs in order to determine which bucket contains poison where your given the amount of buckets and maximum amount of steps allowed to find the poison. My algorithm simply solves the math equation (T + 1) ^ x >= N where T is the maximum amount of steps, x is the minimum amount of pigs, and N is the total amount of buckets. This equations was derived by looking at example test cases and seeing that the total amount of states for each pig is T + 1 and the total amount of steps need to be equal to or exceed the amount of buckets. This algorithm runs in O(1) runtime with O(1) space which is the most optimal algorithm.
