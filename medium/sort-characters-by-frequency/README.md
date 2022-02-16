
# Sort Characters By Frequency

## Medium

Date uploaded: 2/16/22

Language: C++

Runtime: 8 ms

Memory Usage: 8.5 mb

Details: The problem is sorting characters in a string by frequency and returning a new string of all the characters in descending order of frequency. My algorithm first uses a map to count all the characters then puts every character in the map into a priority queue heap that sorts them based on frequency. I then just loop over the heap popping one element from the heap and adding the frequency of that character to a return string. This algorithm has a worst case runtime of O(nlogn) which isn't the most optimal of O(n).
