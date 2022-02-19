
# Reorganize String

## Medium

Date uploaded: 2/18/22

Language: C++

Runtime: 5 ms

Memory Usage: 6.4 mb

Details: The problem is reorganizing a string so that repeated characters don't appear next to each other. My algorithm is the brute force approach where it adds all frequencies of each character to a map, then adds all map entries to a heap that sorts them in descending order by frequency, and finally convert the heap to a vector to be traversed over. Finally I use a greedy algorithm to create a new string where it loops over the frequency array, finds the character with the most entries (that wasn't printed last) and adds it to the string while subtracting a frequency (removing the character if the frequency goes to zero). This algorithm runs in >O(n) runtime which is not the most optimal solution (which is O(n)).
