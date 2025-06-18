#include<bits/stdc++.h>
using namespace std ;

int fibonnaci(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    int res = fibonnaci(n-1)+fibonnaci(n-2);
    return res ; 
}

int main(){
  int res = fibonnaci(5);
  cout<<res;
  return 0;
}