#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int n =  nums.size();
            int leftpre = 1;
            int rightpre = 1;
            int ans = nums[0];
            for(int i=0;i<n;i++){
                leftpre = leftpre==0?1:leftpre  ;
                rightpre = rightpre == 0?1:rightpre ;
    
                leftpre*=nums[i];
    
                rightpre*=nums[n-1-i];
    
                ans = max(ans,max(leftpre,rightpre));
            }
            return ans ;
        }
};