#include<bits/stdc++.h>
using namespace std ;

int fibonacii(int n){
    if(n<2)return n;
    int a = 0, b = 1;
    int i = 2;  
    int res = 0;
    while(i <= n){  
       res = a + b;
       a = b;
       b = res;
       i++;
    }
    return res;
}

int main(){
    int res = fibonacii(5);
    cout<<res;
    return 0;
}