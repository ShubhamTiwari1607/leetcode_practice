#include<bits/stdc++.h>
using namespace std ;

int removeAllelement(vector<int> &nums,int val){
    int l=0,r=0;
    while(r<nums.size()){
        if(nums[r]== val){
            r++;
        }else{
            swap(nums[l],nums[r]);
            l++,r++;
        }
    }
    return l++;
}
int main(){
    vector<int> v={1,1,2,3,4,5,1};
    int size = removeAllelement(v,1);
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}