#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:
        int numOfSubarrays(vector<int>& arr) {
           constexpr int MOD = 1000000007;
           int n = arr.size();
           vector<int> acc(n,0);
           acc[0] = arr[0];
           for(int i=1;i<n;i++){
            acc[i] = arr[i]+acc[i-1];
           }
           int even =1,odd =0,count=0 ;
    
           for(int i=0;i<n;i++){
            if(acc[i]%2==0){
              count = (count +odd )%MOD;
              even++;
            }else{
              count = (count + even )%MOD;
              odd++;
            }
           }
            return count ;
     
        }
    };