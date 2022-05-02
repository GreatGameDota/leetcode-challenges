
# Bulls and Cows

## Medium

Date uploaded: 5/2/22

Language: C++

Runtime: 6 ms

Memory Usage: 6.7 mb

Details: The problem is finding the amount of "cows" and "bulls" given a correct number and a guess number where bulls are correct guesses and cows are correct numbers but wrong spot. My algorithm first counts all bulls and counts different numbers in the guess in a map. Then I loop over secret again and check if the number in secret appears in the map, if it does than it counts as a cow. This is one of the more optimal solutions with O(n) runtime and O(n) space complexity worst case.
