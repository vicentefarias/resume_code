class Solution:
    def countElements(self, nums) -> int:
        sNums = sorted(nums)
        count = 0
        if len(sNums) > 2:
            for i in range(1,len(sNums)-1):
                if min(sNums[:i]) < sNums[i] and max(sNums[i+1:]) > sNums[i]:
                    count += 1
        return count