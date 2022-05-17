class Solution:
    def digitSum(self, s: str, k: int) -> str:
        if (len(s)>k):
            nums =  [ s[start:start+k] for start in range(0, len(s), k)]
            ret = ''
            for i in nums:
                ret += str(sum(int(j) for j in i))
            return self.digitSum(ret,k)
        return s
        