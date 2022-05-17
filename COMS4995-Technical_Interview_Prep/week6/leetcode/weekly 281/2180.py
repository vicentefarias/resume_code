class Solution:
    def countEven(self, num):
            count = 0 
            for i in range(1, num+1):
                strI = str(i)
                if sum([int(i) for i in strI])%2==0:
                    count+=1
            return count
            