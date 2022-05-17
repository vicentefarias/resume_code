class Solution:
    def findLonely(self, nums):
        dic = {}
        for i in nums:
            if i not in dic.keys():
                dic[i] = 1
            else:
                dic[i] += 1
                
        lonelies = []
        for i in dic.keys():
            if dic[i] == 1:
                if (i-1) not in dic.keys() and (i+1) not in dic.keys():
                    lonelies.append(i)
        return lonelies