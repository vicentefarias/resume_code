class Solution:
    def rearrangeArray(self, nums) :
        pos = []
        neg = []
        for i in nums:
            if i < 0:
                neg.append(i)
            else:
                pos.append(i)
                
        pos = pos[::-1]
        neg = neg[::-1]
        ret = []
        for i in range(len(nums)):
            if i%2 == 0:
                ret.append(pos.pop())
            else:
                ret.append(neg.pop())
        return ret