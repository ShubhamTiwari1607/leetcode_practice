#include<bits/stdc++.h>
using namespace std;

void decimal_to_binary(int decimal){
    stack<int> st;
    while (decimal>0)
    {
        st.push(decimal%2);
        decimal/=2;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    
}
int main(){
    int decimal = 10;
    decimal_to_binary(decimal);
    return 0;
}