#include<bits/stdc++.h>
using namespace std ;

void helper(vector<int>& nums,vector<bool>used,vector<int>inter,vector<vector<int>>finalres){
    if(inter.size()==nums.size()){
        finalres.push_back(inter);
    }
    for(int i=0;i<nums.size();i++){
        if(used[i]==true){
         continue;
        }
        inter.push_back(nums[i]);
        used[i]=true;
        helper(nums,used,inter,finalres);
        used[i]=false;
        inter.pop_back();
    }  
}


vector<vector<int>> Permutation(vector<int>& nums){
    vector<vector<int>> finalres ;
    vector<int> inter;
    vector<bool>used(nums.size());

}