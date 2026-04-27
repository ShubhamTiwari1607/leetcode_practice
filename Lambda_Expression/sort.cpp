#include<bits/stdc++.h>
using namespace std ;

int main(){
    auto comparator = [](int a,int b){
        return a > b ;
    };
    vector<int> arr = {1,2,3,5,4,6,10,9};
    sort(arr.begin(),arr.end());
    for(const int &num : arr){
        cout << num <<"\t";
    }
    cout << "\n" ;
    sort(arr.begin(),arr.end(),comparator) ;
    for(const int &num : arr){
        cout << num <<"\t";
    }
    return 0;
}