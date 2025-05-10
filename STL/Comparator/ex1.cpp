#include<bits/stdc++.h>
using namespace std ;

int main(){
    pair<int , int> arr[] ={{1,2},{2,1},{3,2},{4,3}};
    auto greater = [](pair<int,int> a,pair<int,int> b){
        if(a.second > b.second) return true ;
        return false ;
    };
    sort(begin(arr),end(arr)); // sorted {{1,2},{2,1},{3,1},{4,3}}
    sort(begin(arr),end(arr),greater);
    for(auto x: arr){
        cout<<"{"<<x.first<<","<<x.second<<"}"<<endl;
    }
    return 0;
}