class Solution:
    def findFinalValue(self, nums, original):
        for i in sorted(nums):
            if i == original:
                original *= 2
        return original