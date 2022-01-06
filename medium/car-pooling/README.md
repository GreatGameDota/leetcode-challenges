
# Car Pooling

## Medium

Date uploaded: 1/6/22

Language: C++

Runtime: 33 ms

Memory Usage: 10.5 mb

Details: The problem is seeing if a car can complete all trips with a certain person capacity. You are given a list of trips with a certain amount of people for each trip. My solution uses a min heap with a custom class to store all trips and whether they are the start or end of one. I then just pop each from the heap and add or subtract from the total current occupants of the car. This algorithm runs in O(n) runtime where n is the amount of trips.
