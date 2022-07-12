
# Sliding Window Maximum

## Hard

Date uploaded: 7/11/22

Language: C++

Runtime: 393 ms

Memory Usage: 149.2 mb

Details: The problem is determining the maximum value in a give sized window for every index in an array the window can slide over. My algorithm uses a mono deque to keep track of the largest value seen in the list as well as keeping track of all values in the current window. It does this by looping over the list and popping anything from the front of the deque thats less than the current value before adding the current value to the front. Then when the loop reaches the end of a window it pops all of the biggest values that are outside the window until it finds the largest value inside the window. This runs in O(n) runtime with O(n) space and is the most optimal algorithm.
