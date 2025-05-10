#include<bits/stdc++.h>
using namespace std ;

void moveZero(vector<int> &nums){
    int size = nums.size()  ;
    int l=0,r=0;
    while(r<size){
        if(nums[r]!=0 ){
            swap(nums[l],nums[r]);
            r++,l++;
        }else{
            r++;
        }
    }
}
int main(){
    vector<int> arr = {4,1,0,4,0,6,0,9,0,1,0};
    moveZero(arr);
    for(auto x :arr){
        cout<<x<<" ";
    }
    return 0;
}