class Solution:
    def pivotArray(self, nums, pivot):
        lt = []
        eq = []
        gt = []
        for i in nums:
            if i < pivot:
                lt.append(i)
            if i == pivot:
                eq.append(i)
            if i > pivot:
                gt.append(i)
        return lt + eq + gt