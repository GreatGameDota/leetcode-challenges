
# Find Median from Data Stream

## Hard

Date uploaded: 4/29/22

Language: C++

Runtime: 1772 ms

Memory Usage: 120.6 mb

Details: The problem is finding the median of numbers as they are streamed in. My algorithm stores all the numbers sorted in a linked list and then returns the median just as the middle elements. This has a runtime of O(n) and O(n/2) with memory complexity of O(n). This algorithm is far from the most optimal which is storing two halves of the list in two heaps.
