#include<bits/stdc++.h>
using namespace std ;

bool isPrime(int n){
    if(n <= 1) return false; 
    for(int i = 2; i * i <= n; i++){ 
        if(n % i == 0) return false;
    }
    return true;
}

bool sum(string s){
    int res = 0;
    for(int i = 0; i < s.size(); i++){
       if(s[i] >= '0' && s[i] <= '9'){
           res += s[i] - '0'; 
       }
    }
    return isPrime(res);
}

int main(){
    string s = "@122qjdsj134";
    cout << sum(s);
    return 0;
}