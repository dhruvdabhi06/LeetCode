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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *front = head;
        ListNode *back = head;
        if(head == NULL){
            return NULL;
        }
        front = head -> next;
        while(front != NULL){
            if(front->val == back->val){
                front = front -> next;
                back -> next = front;
            }else{
                front = front -> next;
                back = back -> next;
            }
        }
        return head;
    }
};