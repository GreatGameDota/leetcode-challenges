
# 3sum

## Medium

Date uploaded: 9/11/21

Language: C++

Runtime: 1761 ms

Memory Usage: 23 mb

Details: The problem is finding triplets in a list of numbers that add up to zero. My algorithm is the best possible algorithm (with proper optimizations) where I first sort the input array. Next it loops through the whole array and for each number makes it the middle triplet. Then it searches through the whole array and finds two sets of numbers which, along with the middle number, add up to zero. I keep an array with every found triplet group and check the array before adding the new set (this is extremely slow). The total runtime for this algorithm is >O(n^2) but the best is around O(n^2).
