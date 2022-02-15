
# Top K Frequent Elements

## Medium

Date uploaded: 2/15/22

Language: C++

Runtime: 17 ms

Memory Usage: 13.8 mb

Details: The problem is simply finding the kth most frequent occurrences of numbers in a list. My algorithm first uses a map to count all the elements in a list then puts every element in the map into a priority queue heap that sorts them based on frequency. I then just loop k times popping one element from the heap and adding it to a return list. This algorithm runs in O(nlogk) runtime worst case and O(n) best case. The most optimal algorithm runs in O(n).
