#include<bits/stdc++.h> //LIFO data structure 
using namespace std ;

int main(){
    stack<int> st ;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    for(auto it = st.top();!st.empty();st.pop()){
        cout<<st.top()<<" ";
    }
    return 0;
}
// push(), pop(), top(), empty(), and size() are all O(1) operations in a stack.