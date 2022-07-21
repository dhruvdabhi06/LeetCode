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
    ListNode * left;
    bool flag = false ;
    void solve(ListNode* right,int m,int n){
        if(n == 1) 
            return ;
        right = right -> next ;
        if(m > 1){
            left = left -> next;
        }
        solve(right,m-1,n-1);
        if(left == right || right->next == left){
            flag = true;
        }
        
        if(!flag){
            int t = left -> val;
            left -> val = right -> val;
            right -> val = t;
            left = left -> next;
        }
        
        
    }
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head == NULL) return NULL;
        if(m == n) return head ;
        left = head ;
        ListNode * right = head ;
        
        solve(right,m,n);
        return head;
    }
};