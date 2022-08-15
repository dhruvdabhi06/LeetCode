# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        p = head 
        s = ""
        while p :
            s += str(p.val)
            p = p.next
        
        ss = s[::-1]
        if s == ss:
            return True
        else:
            return False