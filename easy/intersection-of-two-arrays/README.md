
# Intersection of Two Arrays

## Easy

Date uploaded: 5/28/22

Language: C++

Runtime: 7 ms

Memory Usage: 10.5 mb

Details: The problem is simply finding the intersection of two arrays. My algorithm uses a map to count which numbers appear in the first list and then loops through the second list to check if any number appears again. This runs in O(n+m) runtime with O(n) space where n is length of first list and m the length of the second list. This isn't the most optimal algorithm which would be sorting and using two pointers for O(1) space complexity (albeit longer runtime).
