#include<bits/stdc++.h>
using namespace std;


int main(){
  vector<int> arr = {1,2,3,4,5,6,7};
  make_heap(arr.begin(),arr.end()); //by default the function make heap makes a max heap
  for(auto x: arr){
    cout<<x<<" ";
  }
  
  return 0;
}