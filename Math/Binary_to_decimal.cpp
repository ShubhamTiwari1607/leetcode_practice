#include<bits/stdc++.h>
using namespace std ;

int Binary_to_decimal(int binary){
    int res = 0 ;
    int i = 0 ;
    while(binary>0){
       res += (binary % 10) * pow(2, i++);
       binary/=10;
    }
    return res;
}

int main(){
    int b = 111 ;
    int d = Binary_to_decimal(b);
    cout<<"the decimal of given number is "<<d ;
    return 0;
}