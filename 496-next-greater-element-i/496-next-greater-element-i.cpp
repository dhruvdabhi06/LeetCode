class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // This code is to find the greatest element from right
        vector<int> nextGreatest(nums2.size(),-1);
        int n = nums2.size();
        stack<int> stk;
        stk.push(nums2[n-1]); // insert the last of nums2 in stack;
        for(int i = n-2;i>=0;i--){ // start from second last in nums2 ans last of nums2 is                                              // always -1;
            // if top of stack is greater then current nums2 element then this is the 
            // greaterst from right and then push that element into stack
            if(stk.top() > nums2[i]){ 

                nextGreatest[i] = stk.top();
                stk.push(nums2[i]);
                // is top of stack is less than current element;
            }else{
                // look for the greatest element till the stack is empty
                    while((stk.empty() == false) && (stk.top() < nums2[i]) ){
                        stk.pop();
                    }
                // if stack is empty then -1 else add top of stack
                nextGreatest[i] = stk.empty() ? -1 : stk.top();
                // always insert current element into stack
                stk.push(nums2[i]);


            }
        }
        // now store the index of nums2 with element into stack
        //    and map that with nextGreatest array
        unordered_map<int,int>mp;
        vector<int> ans;
        for(int i= 0;i<n;i++) mp.insert({nums2[i],i});
        for(int i = 0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){

                    ans.push_back(nextGreatest[mp[nums1[i]]]);
            }   
        }


        return ans;
    }
};