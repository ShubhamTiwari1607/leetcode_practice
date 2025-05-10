#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndex = 0;
        for(int i=0;i<nums.size();i++){
            if(i>maxIndex)return false ;
            maxIndex = max(maxIndex,i+nums[i]);
        }
        return true;
    }
};
int main(){
    vector<int> arr= {3,2,1,0,2,4};//0 means false
    Solution obj;
    bool res=obj.canJump(arr);
    cout<<"can we jump upto the final "<<res;
    return 0;
}