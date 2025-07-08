#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int size,top = -1;
    int* arr;

public:

    Stack(int size){
        this->size  = size ;
        arr = new int[size] ;
    }

    void push(int n){
       if(top == size){
        cout<<"stack overflow\n";
        return ;
       }
       arr[++top] = n;
    }

    int pop(){
        if(top ==  -1){
            cout <<"Stack underflow\n";
        }
        int x = arr[top--];
        return x ;
    }

    int curr_size(){
        return top;
    }

    int top_el(){
        int x = arr[top];
        return x;
    }
};
int main()
{   Stack st(10) ;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.pop();
    int top = st.top_el();

    cout << top  ;
    return 0;
}