class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(char ch:s){
            if((int)ch>=65 && (int)ch<=90){
                ch+=32;
                str.push_back(ch);
            }
            else if((int)ch>=97 && (int)ch<=122) str.push_back(ch);
            else if((int)ch>=48 && (int)ch<=57) str.push_back(ch);
            else continue;
        }
        for(int i=0;i<str.length()/2;i++){
            if(str[i]!=str[str.length()-1-i]) return false;
        }
        return true;
    }
};