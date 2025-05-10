#include<bits/stdc++.h>
using namespace std ;

int singleelement(vector<int> &nums){
   int res = 0;
   for(auto num : nums){
     res^=num;
   }
   return res ;
}
int main(){
    vector<int> arr = {6,1,3,4,4,3,6} ;
    int single = singleelement(arr);
    cout<<"the single element in the array is : "<< single ;
    return 0;
}