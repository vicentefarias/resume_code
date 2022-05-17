class Solution:
    def maxScoreIndices(self, nums):
        maxS = score = nums[0:].count(1)
        indices = [0]
        for i in range(1, len(nums)+1):
            if nums[i-1] == 0:
                score += 1
                if score > maxS:
                    indices = [i]
                    maxS = score
                elif score == maxS:
                    indices.append(i)
            if nums[i-1] == 1:
                score -= 1
        return indices