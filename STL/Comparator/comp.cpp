#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int > v ={ 2,3,1,4,3,5} ;
    int n = v.size();
    sort(v.begin(),v.end());
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}