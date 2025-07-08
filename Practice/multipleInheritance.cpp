#include<bits/stdc++.h>
using namespace std ;

class A{
    public:
    A(){
        cout<<"Class A constructor\n";
    }
    void parentA(){
        cout << "Parent A class\n";
    }
};

class B{
    public:
    B(){
        cout<<"Class B constructor\n";
    }
    void parentB(){
        cout << "Parent B class\n";
    }
};

class C : public A,public B{
    public :
    C(){
        cout <<"Class C constructor\n";
    }
    void parentC(){
        cout << "Parent C class\n";
    }
    
};

int main(){
    C obj;
    obj.parentA();
    obj.parentB();
    obj.parentC();
}