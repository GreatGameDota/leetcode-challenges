
# Min Stack

## Easy

Date uploaded: 3/31/22

Language: C++

Runtime: 47 ms

Memory Usage: 16.3 mb

Details: The problem is creating a MinStack data structure which acts like a normal stack however it includes a new function that returns the current minimum value in the stack. My algorithm uses an inner stack variable that holds pair of two ints. When a new int is added its value along with the current minimum value is added to the stack. When an int is removed if its the minimum value in the stack then the current min is set to that node's minimum and if the stack is empty after the node is removed than the current minimum value is reset. Finally the function that returns the current minimum just returns the smallest of the current stack's top value and the minimum value stored in the top of the stack. This isn't the most optimal but isn't the worst.
