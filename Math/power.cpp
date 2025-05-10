#include<iostream>
using namespace std;

double pow(double x,int n){
    long long exp = n;
    double res = 1;
    if(n<0){
        x = 1/x;
        exp = -exp ;
    }
    while(exp>0){
        if(exp%2==1){
            res*=x;
        }
        x*=x;
        exp/=2;
    }
    return res ;
}

int main(){
    int x=2 ,n=-3 ;
    double res = pow(x,n);
    cout<<res ;
    return 0;
}