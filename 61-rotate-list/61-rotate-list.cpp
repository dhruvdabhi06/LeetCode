/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode *p = head ;
        ListNode *temp = head;
        
        int n = 1 ;
        while(temp->next != NULL){
            temp = temp -> next;
            n++;
        }
        temp = head;
        k = k % n;
        while(k--){
            while(temp -> next != NULL){
                temp = temp -> next; 
            }
            temp->next = head;
            head = temp ;
            p = temp;
            while(temp -> next != head){
                temp = temp->next;
            }
            temp -> next = NULL;
            temp = p;
        }
        return head;
    }
};