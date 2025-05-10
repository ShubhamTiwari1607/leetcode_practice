#include<bits/stdc++.h>
using namespace std ;

bool isUgly(int n){
    if(n<=0)return false ;
    while(n!=1){
     if(n%2==0){
        n/=2;
     }else if(n%3==0){
        n/=3;
     }else if(n%5==0){
        n/=5;
     }else{
        break;
     }
    }
    return n==1 ;
}

int main(){
    cout<<"is 6 ugly (number whoes prime factor is not 2 ,3 or 5) => "<<isUgly(6);
    return 0;
}