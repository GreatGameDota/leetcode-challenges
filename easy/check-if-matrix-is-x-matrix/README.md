
# Check if Matrix Is X-Matrix

## Easy

Date uploaded: 6/26/22 (Was completed the previous day)

Language: C++

Runtime: 65 ms

Memory Usage: 16.2 mb

Details: The problem is simply determining if a given square matrix is an "X" matrix where all numbers in the diagonal aren't zero and all other number are. My algorithm simply iterates over the diagonal checking if any and zero else changing the values to -1 and then iterating over all number and checking if any are greater than zero. This runs in O(n^2) runtime with O(1) space which is the most optimal algorithm (however it can be done in just 1 pass).
