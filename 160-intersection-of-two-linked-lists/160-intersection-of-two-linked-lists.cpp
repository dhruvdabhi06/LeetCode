/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* h1 = headA;
        int length1 = 0, length2 = 0 ;
        while(h1 != NULL){
            ++length1;
            h1 = h1 -> next;
        }
        ListNode*h2 = headB;
        while(h2!=NULL){
            ++length2;
            h2 = h2 -> next;
        }
        if(h1 != h2) return NULL;
        int m1 = max(0,length1-length2);
        int m2 = max(0,length2-length1);
        while(m1){
            headA = headA -> next;
            --m1;
        }
        while(m2){
            headB = headB -> next;
            --m2;
        }
        while(headA != headB){
            headA = headA -> next;
            headB = headB -> next;
        }
        return headA;
    }
};