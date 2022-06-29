
# Queue Reconstruction by Height

## Medium

Date uploaded: 6/29/22

Language: C++

Runtime: 111 ms

Memory Usage: 11.7 mb

Details: The problem is reordering a given list based on the heights of every element and the amount of previous elements that are greater than or equal to the height of the element. My algorithm first sorts the list by height in ascending order, loops over the list and for every element iterates over the return array and counts the amount of empty spots or spots with the same height until the count matches the needed amount of elements greater than or equal to the current element. Once the algorithm finds a spot to add the current element it does another loop to skip over spots already taken in the return array. This algorithm runs in O(n^2) runtime with O(1) space which is not the most optimal algorithm (which is O(nlogn) runtime using a binary indexed tree).
