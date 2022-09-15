
# LRU Cache

## Medium

Date uploaded: 9/14/22

Language: C++

Runtime: 472 ms

Memory Usage: 166.6 mb

Details: The problem is creating a data structure that acts like a LRU cache where key-value pairs are stored and retrieved and when the cache is filled the next unique addition of a key will evict the least recently used key. My algorithm uses a map and doubly-linked list to implement the cache by storing recently used keys at the beginning of the linked list and LRU keys at the end. This algorithm runs in O(1) time for insertion and retrieval which is the most optimal algorithm.
