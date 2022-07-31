/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q != NULL) return false;
        if(q == NULL && p != NULL) return false;
        if(p == NULL && q == NULL) return true;
        while(p != NULL && q != NULL){
            if(p->val != q->val){
                return false;
            }else{
                bool ans1 = isSameTree(p->left,q->left);
                bool ans2 = isSameTree(p->right,q->right);
                return(ans1&&ans2);
            }
        }
        return false;
    }
};