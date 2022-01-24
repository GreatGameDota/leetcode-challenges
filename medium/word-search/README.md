
# Word Search

## Medium

Date uploaded: 1/24/22

Language: C++

Runtime: 516 ms

Memory Usage: 8 mb

Details: The problem is seeing if a word appears in a 2d array of characters when moving in four directions around each letter. My algorithm is a simple recursive back tracking algorithm that searches all possibilities from each letter in the word. It first loops through every character and if the character is the beginning of the word it starts the search. The search recursively searches all four characters around each letter and returns false if it goes outside the 2d array or the letter isn't in the word. The search only returns true if it reaches the end of the word. The trick to keep track of used letters was taken from the discussions after I got stuck however I am happy I figured out most of the algorithm. This algorithm has one of the most optimal runtimes possible.
