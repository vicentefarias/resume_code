class Solution:
    def minimumRounds(self, tasks) -> int:
        tasks = sorted(tasks)
        count = [1]
        if len(tasks)>1:
            for i in range(1,len(tasks)):
                if tasks[i]==tasks[i-1]:
                    count[-1]+=1
                else:
                    count.append(1)
        r = 0
        for i in count:
            if (i==1):
                return -1
            elif (i==2 or i==3):
                r+=1
            else:
                r+= int(i/3)
                if (i%3):
                    r+=1
        return r