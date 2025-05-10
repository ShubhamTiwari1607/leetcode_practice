//remove the duplicate element from the array 
#include<iostream>
#include <vector>
using namespace std ;
class Solution{
public:
  vector<int> removeDuplicate(vector<int> nums){
    int l = 0 ,r = 1;
    while(r<nums.size()){
        if(nums[l] == nums[r]){
            r++;
        }else{
            l++ ;
            nums[l] = nums[r];
            r++;
        }
    }
    
    return nums ;
  }

};
int main(){
    vector<int> nums = {1,1,2,2,3,4,4};
    Solution S ;
    nums = S.removeDuplicate(nums);
    for(int i = 0;i<nums.size();i++){
         cout<<nums[i]<<" ";
    }
    return 0;
}