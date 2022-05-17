class Solution:
    def intersection(self, nums):
        d = {}
        for i in nums:
            for j in i:
                if j not in list(d.keys()):
                    d[j] = 1
                else:
                    d[j]+=1
        ret = []
        for i in list(d.keys()):
            if d[i]==len(nums):
                ret.append(i)
        return sorted(ret)