
# Maximum Rows Covered by Columns

## Medium

Date uploaded: 9/6/22

Language: C++

Runtime: 6 ms

Memory Usage: 8.6 mb

Details: The problem is determining the maximum amount of rows that can be "covered" by only choosing k columns in a matrix. A row is "covered" if all the indices of 1's in the row are chosen columns or all values in a row are 0. My algorithm first caches all values of each row as a binary number before then iterating over all possible combinations of chosen columns using bit masking. For every bit mask, it first checks if there are k activated bits before looping over all cached row values and determining if the row value is a submask of the total mask meaning that those chosen columns would cover the current row. This runs in O(n*2^m) runtime with O(n) space which is the most optimal algorithm.
