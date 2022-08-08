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
    ListNode* reverseKGroup(ListNode* head, int k) {
      
      //base case
      if(head == NULL)
      {
        return head;
      }
      
      // step1 : reveser 1st case - first k nodes
      ListNode* forward = NULL;
      ListNode* curr = head;
      ListNode* prev = NULL;
      
      int count = 0;
      int temp = 0 ;
      ListNode*tt = curr ;

      while(temp < k && tt != NULL){
        tt = tt -> next ; 
          temp++;
      }
      if(temp < k){
          return head ;
      }
      while(curr != NULL && count < k)
      {
        
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
      }
        if(count < k){
            
        }
      
      //step2 : Recursion call for remaining part
      if(forward != NULL)
      {
        head->next = reverseKGroup(forward, k);
      }
      
      //strp3 : return head of reverse list
      
      return prev; 
    }
};