
# Fair Distribution of Cookies

## Medium

Date uploaded: 6/12/22

Language: C++

Runtime: 1522 ms

Memory Usage: 6.7 mb

Details: The problem is dividing up an array of numbers into k parts where each parts' sum is as balanced as possible. My algorithm explores all permutations of sums split between k buckets and finds the smallest sum where the sum is the largest amount a single bucket has. The algorithm explores these permutations using backtracking. This is not the most optimal algorithm as it searches all possible permutations and the most optimal algorithm uses dp and bitmap enumeration.
