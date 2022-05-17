class Solution:
    def minimumCost(self, cost) -> int:
        sCost = sorted(cost)[::-1]
        price = 0
        while(len(sCost)) > 2:
            price += sCost[0]
            price += sCost[1]
            sCost = sCost[3:]
        for i in range(len(sCost)):
            price += sCost[i]
        return price