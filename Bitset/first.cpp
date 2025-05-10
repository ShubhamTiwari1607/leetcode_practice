#include<bits/stdc++.h>
using namespace std ;

int main(){
    bitset<10> setA ;
    bitset<10> setB ;
    vector<int> arr1 = {1,6,3,4} ;
    vector<int> arr2 = {3,4,5,6} ;
    
    for(const int& num : arr1){
       setA.set(num);
    }
    
    for(const int& num : arr2){
        setB.set(num);
    }

    cout << (setA&setB).count();
    return 0 ;
}