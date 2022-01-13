
# Minimum Number of Arrows to Burst Balloons

## Medium

Date uploaded: 1/13/22

Language: C++

Runtime: 1609 ms

Memory Usage: 145.1 mb

Details: The problem is simply finding the minimum amount of vertical lines needed to cross every line segment on the x-axis. My solution is extremely brute force that is very slow and uses a lot of memory. My algorithm first adds all segments to a min heap then loops through every point adding each to a stack. When it reaches the end of a segment it checks if its had a line put through it, if it hasn't I put a line there and pop all segments off the stack and set every segment to have been "popped". If it reaches the end of a segment and its been popped then it just continues.
