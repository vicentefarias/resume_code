# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head, val: int):
        if head == None:
            return None
        if head.val == val:
            head = self.removeElements(head.next, val)
            return head
        else:
            head.next = self.removeElements(head.next, val)
            return head