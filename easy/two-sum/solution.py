class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        li = []
        for i in range(len(nums)):
            li.append([nums[i], i])
        li.sort()

        start = 0
        end = len(nums) - 1

        while (start <= end):
            if (li[start][0] + li[end][0] == target):
                return [li[start][1], li[end][1]]
            elif (li[start][0] + li[end][0] < target):
                start += 1
            elif (li[start][0] + li[end][0] > target):
                end -= 1

        return []
