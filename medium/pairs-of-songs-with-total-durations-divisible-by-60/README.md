
# Pairs of Songs With Total Durations Divisible by 60

## Medium

Date uploaded: 1/2/22

Language: C++

Runtime: 46 ms

Memory Usage: 23.1 mb

Details: The problem is simply counting the amount of pairs of numbers in a list of integers which when added up are divisible by 60. My algorithm first replaces all numbers in the list with itself modulo 60 so every number is between 0 to 59. I then count up all instances of each number and store the counts in a hash table. Finally I loop through all numbers in the table and look for all possible pairs which added together are divisible by 60. I also have a separate loop for the amount of instances whose numbers are 0 and 30. This algorithm runs in about O(n) however it has multiple O(n) loops as well as some nested loops for getting the final result. The most optimal solution is one O(n) loop.
