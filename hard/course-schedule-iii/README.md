
# Course Schedule III

## Hard

Date uploaded: 6/23/22

Language: C++

Runtime: 320 ms

Memory Usage: 56.3 mb

Details: The problem is determining the maximum amount of courses that can be taken given a list of classes with the amount of time it takes to complete the course and the maximum date to complete it. My algorithm greedily takes classes in order of complete date and if a course cannot be taken then I remove the largest previously taken class to free up space to take the course. This runs in O(nlogn) runtime with O(n) space which is the most optimal algorithm.
