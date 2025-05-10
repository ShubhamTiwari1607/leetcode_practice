
#include<bits/stdc++.h>
using namespace std ;

typedef vector<int> vi ;

int longestSubarray(vi arr,int k){
  unordered_map<int,int> mp;
  int sum = 0,size = 0 ;
  for(int i=0;i<arr.size();i++){
    sum += arr[i] ;
    if(sum == k){
        size = i+1;
    }else{
       if( mp.find(sum-k)!=mp.end()){
        size = max(size,i-mp[sum-k]);
       }
    }
    if(mp.find(sum)==mp.end()){
        mp[sum] =i;
    }
  }
  return size;
}
int main(){
    vi arr = {10,5,2,7,1,-10};
    cout<<longestSubarray(arr,15);
    return 0;
}