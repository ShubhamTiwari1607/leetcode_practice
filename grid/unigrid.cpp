// minimum number of operation required to make all value in the grid same
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> nums ;
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                nums.push_back(grid[i][j]);
            }
        }

        sort(nums.begin(),nums.end()) ;
        int lenght = nums.size();
        int finalCommon = nums[lenght/2] ;
         int result = 0 ;
        for(const int& num : nums){
            if(num%x != finalCommon%x){
                return -1;
            }else{
               result += abs(num - finalCommon)/x;
            }
        }
        return result ;
    }
};