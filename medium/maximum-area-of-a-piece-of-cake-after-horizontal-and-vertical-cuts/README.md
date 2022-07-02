
# Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts

## Medium

Date uploaded: 7/2/22

Language: C++

Runtime: 98 ms

Memory Usage: 32.3 mb

Details: The problem is determining the largest area of cake given a cake of h and w and list of horizontal and vertical cuts. My algorithm sorts all the cuts in ascending order then iterates over all of them and finds the largest difference between the horizontal and vertical cuts and returns the multiplication of both. This runs in O(vlogv + hlogh) with O(1) space which is the most optimal algorithm.
