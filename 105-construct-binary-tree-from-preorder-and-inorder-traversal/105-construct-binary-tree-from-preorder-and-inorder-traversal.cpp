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
    TreeNode* solve(int start,int end,vector<int>&  preorder, int& pindex, unordered_map<int,int>&hash){
        if(start > end){
            return NULL;
        }
        TreeNode *root = new TreeNode(preorder[pindex++]);
        int index = hash[root->val];
        
        root -> left = solve(start,index-1,preorder,pindex,hash);
        root -> right = solve(index+1,end,preorder,pindex,hash);
        return root;
        
    }
    
    
    
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int s = 0 ;
        int e = n - 1;
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            hash[inorder[i]] = i;
        }
        int pindex = 0 ;
        TreeNode* root = solve(s,e,preorder,pindex,hash);
        return root;
    }
};