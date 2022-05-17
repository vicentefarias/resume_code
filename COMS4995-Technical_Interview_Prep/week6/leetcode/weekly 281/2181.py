class Solution:
    def mergeNodes(self, head):
        temp = head
        if temp==None:
            return None
        if temp.next==None:
            return None
        if temp.val == 0:
            while (temp.next.val>0):
                temp.val += temp.next.val
                temp.next = temp.next.next
            temp.next = self.mergeNodes(temp.next)
        return temp
