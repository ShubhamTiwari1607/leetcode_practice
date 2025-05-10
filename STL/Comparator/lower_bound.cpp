#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int> arr =  {2 ,4 ,9,10,12};
    auto it = std::lower_bound(arr.begin(), arr.end(), 4);
    int res = (it != arr.end()) ? *it : -1; 
    cout << res ;
    return 0;
}