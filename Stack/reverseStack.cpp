#include<bits/stdc++.h>
using namespace std ;

void insertatBottom(stack<int> &st,int element){
    if(st.empty()){
        st.push(element);
        return ;
    }
    int top = st.top();
    st.pop();
    insertatBottom(st,element);
    st.push(top);
}

void reverse(stack<int>& St){
    if(St.empty()){
        return ;
    }
    int top = St.top();
    St.pop();
    reverse(St);
    insertatBottom(St,top);

}

int main(){
    stack<int> st ;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    
    cout<<endl;
    reverse(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0 ;
}