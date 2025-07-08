#include<bits/stdc++.h>
using namespace std ;

int main(){
  vector<int> arr = {1,5,3,4,5} ;
  
  int mid = arr.size()/2;

  int thershold = arr[mid];

  auto greater = [thershold](int a,int b){
    if((a < thershold) && (b >= thershold)) return true;
    if((a >= thershold) && (b < thershold)) return false;
    return a < b; // Optional: maintain order within partitions
  };
  sort(arr.begin(),arr.end(),greater);

  for(const int &x : arr){
    cout << x <<" ";
  }

  return 0;
}
