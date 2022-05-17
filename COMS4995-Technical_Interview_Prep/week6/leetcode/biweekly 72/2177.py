class Solution:
    def sumOfThree(self, num):
        if num%3 !=0:
            return []
        else:
            third = num//3
            return [third-1, third, third+1]