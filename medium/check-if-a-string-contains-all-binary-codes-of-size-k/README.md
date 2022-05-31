
# Check If a String Contains All Binary Codes of Size K

## Medium

Date uploaded: 5/31/22

Language: C++

Runtime: 416 ms

Memory Usage: 59.8 mb

Details: The problem is determining if all binary numbers with length of k are substrings in a given string. My solution simply loops through the whole string grabbing all substrings with the size k, converting them to binary numbers than seeing if its a unique number using a hash table. This solution runs in O(Nk) runtime with O(2^k) space complexity. This is pretty optimal but not the most optimal which is using a rolling hash for O(N) runtime.
