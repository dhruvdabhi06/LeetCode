class Solution {
public:
    bool yo(string s1,string s2, string s3,int i,int j,int k,vector<vector<int>>&vec){
        int n1 = s1.size();
        int n2 = s2.size();
        if(i == n1 && j == n2 && k == s3.length()) return true;
        if(i > n1 || j > n2) return false;
        if(vec[i][j] != -1) return vec[i][j];
        if(s1[i] == s3[k] && s2[j] == s3[k]){
            return vec[i][j] = yo(s1,s2,s3,i+1,j,k+1,vec) || yo(s1,s2,s3,i,j+1,k+1,vec);
        }
        if(s1[i] == s3[k]){
            return vec[i][j] = yo(s1,s2,s3,i+1,j,k+1,vec);
        }
        if(s2[j] == s3[k]){
            return vec[i][j] = yo(s1,s2,s3,i,j+1,k+1,vec);
        }
        return vec[i][j] = false;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        int n1 = s1.length();
        int n2 = s2.length();
        int i = 0 , j = 0 , k = 0 ;
        if(n1 + n2 != s3.size()) return false;
        vector<vector<int>>vec(n1+1,vector<int>(n2+1,-1));
        return yo(s1,s2,s3,i,j,k,vec);
    }
};