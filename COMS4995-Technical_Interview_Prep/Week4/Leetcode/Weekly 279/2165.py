class Solution(object):
    def smallestNumber(self, num):
        """
        :type num: int
        :rtype: int
        """
        if num < 10 and num > -10:
            return num
        
        strNum = str(num)
        if strNum[0] != '-':
            strNum = sorted(strNum)
            ret = ''
            zeroes = ''
            for i in strNum:
                if len(ret)==0 and i=='0':
                    zeroes += '0'
                else:
                    ret += i
                    if len(zeroes)>0:
                        ret += zeroes
                        zeroes = ''
            return(ret)
        else:
            strNum = strNum[1:]
            strNum = sorted(strNum)[::-1]
            s = "".join(map(str, strNum))
            return(-(int(s)))
