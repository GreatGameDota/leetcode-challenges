
# Minimum Path Cost in a Grid

## Medium

Date uploaded: 6/13/22

Language: C++

Runtime: 684 ms

Memory Usage: 80.4 mb

Details: The problem is finding the most optimal path to traverse a n by m grid from top to bottom with the lowest cost, where the cost is the sum of all nodes visited plus the cost of traversing from one node to another. My algorithm uses bottom-up dp and starts from the bottom of the grid to explore all minimum paths for each node and accumulate the total cost of each path. It does this by starting from the second to last row and creating an array of the width of the grid with the same values as the last row in the grid. Then it loops over all nodes in the current row and for each node, calculates the smallest cost to move from that node to a node on the next level. Once it finds the best path it saves the total cost in the dp array. This then just loops until it finishes the first row and then the dp array will contain the smallest cost paths for every node in the first row to the last row. This algorithm runs in O(n\*m\*m) with O(m) space. This isn't the most optimal algorithm as this dp can be optimized a bit.
