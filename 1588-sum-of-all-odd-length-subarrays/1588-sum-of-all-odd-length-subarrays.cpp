class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int totalsum = 0, count , temp;
        for(int i=0;i<arr.size();i++){
            count = 0 , temp = 1 ;
            for(int j=i;j<arr.size();j++){
                count += arr[j];
                if(temp%2) totalsum += count;
                temp++;
            }
        }
        return totalsum;
    }
};