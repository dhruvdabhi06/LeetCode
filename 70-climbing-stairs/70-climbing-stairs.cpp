class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2){
            return n;
        }
        long long int t1 = 1, t2 = 2;
        long long int nextTerm = t1+t2;;
        for (int i = 3; i <= n; ++i)
        {
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
        return t2;
    }
};