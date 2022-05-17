class Solution:
    def findClosestNumber(self, nums) -> int:
        idx = 0
        minI = nums[0]
        if len(nums)>1:
            for i in range(1, len(nums)):
                if abs(nums[i]) < abs(minI):
                    minI = nums[i]
                if minI==-abs(minI) and nums[i]==abs(minI):
                    minI=nums[i]
        return minI
        