
# Maximum Product of Word Lengths

## Medium

Date uploaded: 5/23/22

Language: C++

Runtime: 169 ms

Memory Usage: 19.7 mb

Details: The problem is simply finding the largest pair of words that contain unique letters. My algorithm loops through every word and saves all letters in it to a list. Then it loops over all previously saved words and checks both words' letters to see if they overlap. If they don't overlap then the size of the pair is saved. This algorithm runs in O(n*(N+n)) with O(n) space, where n is amount of words and N is average length of all the words. This is the most optimal algorithm.
