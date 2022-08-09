
# Asteroid Collision

## Medium

Date uploaded: 8/8/22

Language: C++

Runtime: 16 ms

Memory Usage: 17.7 mb

Details: The problem is determining the outcome after a list of asteroids move and collide with each other where each asteroid is either moving left or right based on whether it's positive or negative. My solution greedily puts all positive asteroids into a stack and whenever a negative asteroid is encountered it iterates back over the stack and removes any positive asteroids that are smaller magnitude-wise. This algorithm runs in O(n) runtime with O(n) space which is the most optimal algorithm.
