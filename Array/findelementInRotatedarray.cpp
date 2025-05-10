#include<bits/stdc++.h>
using namespace std;

int findMinRotatedarr(vector<int> arr){
    int n=arr.size();
    int l=0,r=n-1;
    while(l<r){
        int mid = l+(r-l)/2;
        if(arr[mid]>arr[r]){
            l=mid+1;
        }else{
            r = mid ;
        }
    }
    return arr[r];
}
int main(){
  vector<int> arr={4,5,6,7,0,1,2};
  int res = findMinRotatedarr(arr);
  cout << res;
  return 0;
}