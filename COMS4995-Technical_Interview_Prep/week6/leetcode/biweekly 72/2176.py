class Solution:
    def countPairs(self, nums, k):
        d = {}
        for i in range(len(nums)):
            if nums[i] not in list(d.keys()):
                d[nums[i]] = [i]
            else:
                d[nums[i]].append(i)
        
        out = 0
        vals = list(d.values())
        for i in range(len(vals)):
            indices = vals[i]
            for a in range(len(indices)-1):
                for b in range(a+1,len(indices)):
                    if (indices[a]*indices[b])%k==0:
                        out += 1
        return out