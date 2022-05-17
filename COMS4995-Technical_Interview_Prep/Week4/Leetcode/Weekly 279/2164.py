class Solution(object):
    def sortEvenOdd(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        odd=[]
        even=[]
        for i in range(len(nums)):
            if i%2==0:
                even.append(nums[i])
            else:
                odd.append(nums[i])
        odd = sorted(odd)[::-1]
        even = sorted(even)
        new = []
        for i in range(len(nums)):
            if i%2==0:
                new.append(even.pop(0))
            else:
                new.append(odd.pop(0))
        return(new)