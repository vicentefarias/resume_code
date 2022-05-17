class Solution:
    def cellsInRange(self, s) :
        crRange = s.split(':')
        r1 = ord(crRange[0][0])
        c1 = ord(crRange[0][1])
        r2 = ord(crRange[1][0])
        c2 = ord(crRange[1][1])
        rows = [chr(i) for i in range(r1,r2+1)]
        cols = [chr(i) for i in range(c1,c2+1)]
        ret = []
        for r in rows:
            for c in cols:
                ret.append(r+c)
        return(ret)