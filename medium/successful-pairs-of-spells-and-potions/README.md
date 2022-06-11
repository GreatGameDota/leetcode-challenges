
# Successful Pairs of Spells and Potions

## Medium

Date uploaded: 6/11/22

Language: C++

Runtime: 343 ms

Memory Usage: 100.1 mb

Details: The problem is determining the amount of potions will work for each spell given a minimum value for success. My algorithm loops over all spells and for each spell calculates the minimum potion value needed for the spell to work. Then it uses binary search to search for the lowest bound of the target number. This runs in O(nlogn) runtime with O(1) space and is the most optimal algorithm.
