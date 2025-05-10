#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a = 153;  //a number divided by sum of its digit is a niven number or harsahd number
    int b = a;
    int res = 0 ;
    while(a>0){
        int b = a%10 ;
        res+=b;
        a=a/10 ;
    }
    if(b%res == 0){
        cout<<"given number is harshad number";
    }else{
        cout<<"not a harshad number";
    }
    return 0;
}