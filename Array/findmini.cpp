// find minimum in rotated sorted array
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  int findMinimum(vector<int> arr){
    int n=arr.size();
    int l=0,r=n-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(arr[mid]>arr[r]){
            l=mid+1;
        }else{
            r=mid;
        }
    }
    return arr[r];
  }
};

int main(){
 Solution obj;
 vector<int> arr={2,3,4,1};
 int res  = obj.findMinimum(arr);
 cout<<res;
 return 0;
}