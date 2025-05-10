// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]


#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int countz=0,count1=0,count2=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    countz++;
                }else if(nums[i]==1){
                    count1++;
                }else{
                    count2++;
                }
            }
            int i=0;
            while(countz!=0){
              nums[i] =0;
              i++;
              countz--;
            }
            while(count1!=0){
              nums[i] = 1;
              count1--;
              i++;
            }
            while(count2!=0){
              nums[i] = 2;
              count2--;
              i++;
            }
            
        }
    };