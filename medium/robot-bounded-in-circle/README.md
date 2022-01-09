
# Robot Bounded In Circle

## Medium

Date uploaded: 1/9/22

Language: C++

Runtime: 7 ms

Memory Usage: 5.9 mb

Details: The problem is simply determining whether a certain amount of commands results in a robot staying in the same area that can be bounded by a circle. My algorithm executes the given commands once and determines the final vector the robot will have moved at the end of the execution. After this you can determine if it stays in a circle or not depending on if it moved at all or changed direction. This has a runtime of O(n) where n is that amount of commands given.
