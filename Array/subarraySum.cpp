#include<bits/stdc++.h>
using namespace std ;
//maximum subarray with sum equals to k 
int subarraySum(vector<int>&nums,int target){
    int count = 0;
    int sum =0 ;
    unordered_map<int,int>hashmap;
    hashmap[0] = 1;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(hashmap.find(sum-target)!=hashmap.end()){
            count+=hashmap[sum-target];
        }
        hashmap[sum]++;
    }
    return count ;
}

int main(){
    vector<int>arr = {1,2,3,4,1};
    int res = subarraySum(arr,5);
    cout<<res ;
    return 0;
}