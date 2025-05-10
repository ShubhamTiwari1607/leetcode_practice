#include<bits/stdc++.h>
using namespace std ;

int index(string name){
    int res = 0;
    int i=0;

    while(i<name.size()){
        res = res*26+ name[i]-char(64);
        i++;
    }
    return res;
}
int main(){
    int res ;
    string name  = "B" ;
    res = index(name) ;
    cout<<res;
}

