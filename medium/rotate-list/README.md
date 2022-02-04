
# Rotate List

## Medium

Date uploaded: 2/4/22

Language: C++

Runtime: 19 ms

Memory Usage: 11.8 mb

Details: The problem is simply rotating a linked list a given amount of times. My algorithm first gets the total size of the list then mods the total rotations by it so work isn't repeated. Then it just skips to the right node then disconnects the link and moves it to the front of the list which does the same as rotating the list a certain amount. This algorithm runs in O(2n) runtime (O(n) is most optimal).
