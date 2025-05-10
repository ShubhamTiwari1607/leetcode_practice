// Given an integer num, repeatedly add all its digits until the result has only one digit,
//  and return it.

#include<bits/stdc++.h>
using namespace std ;

int addDigit(int num){
    int res =0 ;
    if(num==0){
        return 0;
    }
    return num%9==0?9:num%9;
}
int  main(){
    int num=348;
    cout<<"the sum of digit of the number is : "<<addDigit(num);
    return 0;
}