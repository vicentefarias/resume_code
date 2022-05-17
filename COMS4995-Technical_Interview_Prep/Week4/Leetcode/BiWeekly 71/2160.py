class Solution:
    def minimumSum(self, num):
        strNum = str(num)
        strNum = sorted(strNum)
        return (int(strNum[0])*10+int(strNum[3]) +int(strNum[1])*10+int(strNum[2]))