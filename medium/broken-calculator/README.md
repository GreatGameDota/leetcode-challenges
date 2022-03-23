
# Broken Calculator

## Medium

Date uploaded: 3/23/22

Language: C++

Runtime: 1593 ms

Memory Usage: 5.9 mb

Details: The problem is finding the amount of steps required to go from one number to another when you can only multiple the starting number by 2 or subject it by 1. My algorithm loops until the numbers match and keeps on dividing the target value unless its odd then it adds 1 too it. This algorithm isn't the most efficient because it wastes time when target becomes less than the starting value (it still is accepted however). My second solution takes a trick from the discussion inorder to make it more efficient by stopping once target is less than the starting value then just subjecting them together to find the amount of more steps needed.
