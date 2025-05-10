#include<bits/stdc++.h>
using namespace std;

int maxsubarray(vector<int> arr){
    int currMax = arr[0];
    int MaxRes = arr[0] ;
    for(int i=0;i<arr.size();i++){
        currMax = max(arr[i],arr[i]+currMax);
        MaxRes = max(currMax,MaxRes);
    }
    return MaxRes;
}
int main(){
 vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
 int res = maxsubarray(arr);
 cout<<res;

return 0;
}