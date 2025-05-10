#include <iostream>
#include<map>
#include<vector>

using namespace std ;

vector<int> twoSum(vector<int> nums ,int target ){
    map<int,int> Hashmap ;
    for(auto it = 0 ; it <nums.size();it++){
        int a = nums[it] ;
        int more = target - a ;
        if(Hashmap.find(more) != Hashmap.end()){   // if the element is in the map
            return {Hashmap[more],it} ;
        }
        Hashmap[a] = it ;
    }
    return {0} ;

}

int main(){

    vector<int> vec ;
    int  arr[5] = {1,2,3,4,5} ;

    for(auto it = begin(arr) ; it!=end(arr) ; it++){
        vec.push_back(*it) ;
    }

    vector<int> result = twoSum(vec,7);

    cout<<result[0]<<" "<<result[1];
    return 0 ;

}