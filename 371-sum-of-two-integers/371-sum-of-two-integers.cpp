class Solution {
public:
    int getSum(int a, int b) {
        for(int i=0;i<b;i++){
           a++;
        }
        if(b < 0){
            for(int i = 0; i <abs(b) ; i++){
                a--;
            }
        }
        return a;
    }
};