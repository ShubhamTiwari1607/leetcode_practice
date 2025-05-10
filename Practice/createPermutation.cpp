#include<bits/stdc++.h>
using namespace std;

void permutation(vector<int> arr,vector<vector<int>>&res,vector<int>&intres,vector<bool>visited){
  if(intres.size()==arr.size()){
     res.push_back(intres);
     return ;
  }
  for(int i=0;i<arr.size();i++){
    if(visited[i]==true )continue;
    intres.push_back(arr[i]);
    visited[i]=true ;
    permutation(arr,res,intres,visited);
    intres.pop_back();
    visited[i]=false;
  }
}

int main(){
   vector<vector<int>>res;
   vector<int>inter;
   vector<int>arr = {1,2,3};
   vector<bool>visited(arr.size(),false);
   permutation(arr,res,inter,visited);
   for(int i=0;i<res.size();i++){
    for(int j=0;j<res[i].size();j++){
        cout<<res[i][j]<<" ";
    }
    cout<<",";
   }
  return 0;
}