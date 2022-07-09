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
    bool inorder(TreeNode* root){
        if(root->val == 0 || root->val == 1){
            return root->val;
        }
        bool ans = inorder(root->left);
        if(root->val == 2){
            ans |= inorder(root->right);
        }
        if(root->val == 3){
            ans &= inorder(root->right);
        }
        
        return ans;
    }
    
    bool evaluateTree(TreeNode* root) {
        if(root->val == 0){
            return false;
        }else if(root->val ==1){
            return true;
        }
        bool ans = inorder(root);
        return ans;
        
    }
};