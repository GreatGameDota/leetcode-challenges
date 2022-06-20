
# Reverse Bits

## Easy

Date uploaded: 6/20/22

Language: C++

Runtime: 2 ms

Memory Usage: 6.4 mb

Details: The problem is simply reversing the binary representation of a given number and returning the integer value of the reversed binary number. My algorithm first loops over the given number and extracts each bit from its binary representation and adds them to a list. Then it loops backwards over the list and if the bit is set, it increments the final value by 2 to the amount of bits over the loop is at (plus padding for the zero bits after the end of the initial binary representation). This runs in O(n) runtime, where n is the length of the binary representation, with O(n) space which isn't the most optimal algorithm (O(1) space).
