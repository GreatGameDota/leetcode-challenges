
# Binary Prefix Divisible By 5

## Easy

Date uploaded: 6/13/22

Language: C++

Runtime: 14 ms

Memory Usage: 13.9 mb

Details: The problem is simply iterating over a list of numbers, where each number represents a binary bit, and determining if the number made with all previous binary bits is divisible by 5. My algorithm simply loops through the list and for each binary number it calculates the integer value made by adding this bit and then modding it by 5. This runs in O(n) runtime with O(1) space which is the most optimal algorithm.
