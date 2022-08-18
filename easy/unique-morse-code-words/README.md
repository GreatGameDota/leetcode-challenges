
# Unique Morse Code Words

## Easy

Date uploaded: 8/17/22

Language: C++

Runtime: 4 ms

Memory Usage: 8.4 mb

Details: The problem is simply counting the amount of unique morse code encodings after converting a given list of words to morse code. My algorithm iterates over all strings and for each string converts it to a morse code encoding by iterating over all characters in the string. Then it stores each encoding in a set to keep track of all unique encodings. This runs in O(n*l) runtime, where l is the average length of each string, with O(n) space which is the most optimal algorithm.
