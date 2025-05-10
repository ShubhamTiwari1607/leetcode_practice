#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr ={1 ,2, 3, 4, 5, 1};
  unordered_map<int,int>mpp;
  for(int x:arr){
    mpp[x]++;
  }
  int max = 0;
  int maxelement =0;
  for(auto x : mpp){
    if(x.second>max){
        max = x.second;
        maxelement = x.first;
    }
  }
  int l=0;
  while(arr[l]!=maxelement){
    l++;
  }
  int r=l+1;
  int len=INT_MAX;
  while(r<arr.size()){
    if(arr[r]==maxelement){
     len = min(len,r-l+1);
     l=r;
    } 
    r++;
  }
  cout<<len;
  return 0;
}