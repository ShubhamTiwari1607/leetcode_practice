#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int l =0 ,r = 0 ;
            int sum = 0 , len = INT_MAX;
            for( r = 0 ; r < nums.size() ; r++ ){
              sum += nums[r] ;
              while( sum >= target ){
                len = min(len,r-l+1);
                sum = sum - nums[l];
                l++;
              }
            }
            return len == INT_MAX ? 0 : len ;
        }
    };