class Solution:
    def waysToBuyPensPencils(self, total: int, cost1: int, cost2: int) -> int:
        num = 0
        pens = total//cost1
        for i in range(pens+1):
            num += int((total-cost1*i)/cost2)+1
        return int(num)
            