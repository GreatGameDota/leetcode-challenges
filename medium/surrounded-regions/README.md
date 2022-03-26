
# Surrounded Regions

## Medium

Date uploaded: 3/26/22

Language: C++

Runtime: 24 ms

Memory Usage: 17.1 mb

Details: The problem is finding all O regions on a board that don't touch the borders and change these regions to X's. My algorithm loops over the whole board and for every O it explores the board and looks at all O's connected to it and changes them to \*'s. At the same time it keeps track if the current region is valid and once its finished based on if its valid or not changes all \*'s to O's or X's. This is far from the most efficient algorithm.
