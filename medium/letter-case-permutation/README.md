
# Letter Case Permutation

## Medium

Date uploaded: 1/25/22

Language: C++

Runtime: 32 ms

Memory Usage: 20.3 mb

Details: The problem is returning all possible permutations of a string when changing every letter to lower or upper case. My algorithm is a recursive back tracking algorithm that search all possibilities of the string as it changes the case of each letter. It stops searching once it reaches the end of the string. It searches with no modification and searches after a modification is made. This runs slower than most optimal algorithms because it uses a map to check for duplicates and it does extra recursive calls that cause duplicates to occur.
