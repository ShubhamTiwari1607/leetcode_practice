#include<bits/stdc++.h>
using  namespace std ;

string decimal_to_binary(int decimal){
    string ans ="";
    if (decimal == 0) {
        return "0";  
    }  
    while(decimal>0){
        ans += to_string(decimal%2);
        decimal/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


int main(){
    int decimal = 3;
    string binary = decimal_to_binary(decimal);
    cout<<"the binary conversion of the number is "<<binary;
    return 0;
}