class Solution {
public:
    int minDeletion(vector<int>& s) {
        int ans = 0;
	    int n = s.size();
	    for(int i=0;i+1<n;i++){
		    if(s[i]==s[i+1]) ans++;
		    else i++;
	    }
	    if((ans%2) != (n%2)) ans++;
        return ans;
    }
};