#include<bits/stdc++.h>
using namespace std ;

int count(int n){
    int res = 0;
    while(n!=0){
        n= (n & (n-1) ) ; //since bitwise AND with the (n-1) of a number decrease  1 in binary form by one, we carry loop till number of ones in the loop become zero
        res++;
    }
    return res;
}

int main(){
    int n=72;
    n = count(n);
    cout<<"the ones in the binary representation of the number is : "<<n;
    return 0;
}