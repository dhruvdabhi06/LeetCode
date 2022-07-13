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
    void solve(TreeNode* root,vector<vector<int>>&lot){
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>tt ;
            while(n--){
                TreeNode*temp = q.front();
                q.pop();
                tt.push_back(temp -> val);
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp -> right);
                
            }
            lot.push_back(tt);
           
        }
    }
    
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>lot;
        solve(root,lot);
        return lot;
    }
};