#include<bits/stdc++.h>
using namespace std ;

int fibonacci(int n,vector<int>&Fib){

    if(n==0) return 0;
    if(n==1) return 1;
    if(Fib[n]!=-1){
     return Fib[n];
    }
    return Fib[n] = fibonacci(n-1,Fib)+fibonacci(n-2,Fib);
}

int main(){
    int n ;
    cout<<"enter n\n";
    cin>>n ;
    vector<int>Fib(n+1,-1);
    int sum =  fibonacci(n,Fib);
    cout<<sum;
   return 0;

}