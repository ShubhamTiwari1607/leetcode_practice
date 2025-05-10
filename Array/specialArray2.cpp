#include<bits/stdc++.h>
using namespace std ;

class Solution{
    public:
    vector<bool> isSpecial(vector<int>nums,vector<vector<int>> queries){
        vector<bool> res(queries.size());
        int n = nums.size();
        vector<int>presum(n,0);
        int sum = 0 ;
        for(int i=1;i<n;i++){
            if(nums[i]%2==nums[i-1]%2){
              presum[i] = ++sum;
            }else{
              presum[i] = presum[i-1] ;
            }
        }
        for(auto x: queries){
            int u = x[0];
            int v = x[1];
            if(presum[v]-presum[u]==0){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }
        return res;
    }

};