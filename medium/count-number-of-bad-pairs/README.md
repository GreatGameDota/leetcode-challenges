
# Count Number of Bad Pairs

## Medium

Date uploaded: 8/10/22

Language: C++

Runtime: 399 ms

Memory Usage: 88.7 mb

Details: The problem is determining the amount of pairs in an array that don't meet the requirement j - i == nums[j] - nums[i]. My algorithm counts the frequency of all numbers in the array subtracted by their index which counts the amount of valid pairs. Then I loop through all frequency and count the amount of valid pairs before subtracting that from the total amount of pairs to get the total amount of bad pairs. This algorithm runs in O(n) runtime with O(n) space which is the most optimal algorithm.
