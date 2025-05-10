//adding 1 in the number 

#include<iostream>
#include <vector>

using namespace std ;

vector<int> addInt(vector<int> nums){
    for(int i = nums.size()-1;i>=0;i--){
        if(nums[i]<9){
            nums[i] += 1 ;
            return nums;
        }else{
            nums[i] = 0;
        }
    }
    nums.insert(nums.begin(),1);
    return nums ;
}

void print(vector<int> nums){
    for(auto i = begin(nums); i!=end(nums);i++ ){
        cout<<*i<<" ";
    }
}
int main(){
    vector<int> num = {9,9,9,9};
    num =  addInt(num) ;
    print(num);
    return 0 ;
}