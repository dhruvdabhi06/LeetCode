class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        for(char c : s){
            if(c != '#'){
                st.push(c);
            }else if(!st.empty()){
                st.pop();
            }
        }
        stack<char>st1;
        for(char c : t){
            if(c != '#'){
                st1.push(c);
            }else if(!st1.empty()){
                st1.pop();
            }
        }
        if(st == st1){
            return true;
        }
        return false;
    }
};