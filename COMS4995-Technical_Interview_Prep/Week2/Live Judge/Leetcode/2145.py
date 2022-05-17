class Solution:
    def numberOfArrays(self, differences, lower, upper) -> int:
        cumuSum = [differences[0]]
        count = 0
        for i in range(1, len(differences)):
            cumuSum.append(differences[i] + cumuSum[i-1])
        lowest = min(cumuSum)
        highest = max(cumuSum)
        for i in range(lower, upper+1):
            if lower <= i + lowest and upper >= i + highest:
                count += 1
        return(count)