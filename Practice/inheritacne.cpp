#include <bits/stdc++.h>
using namespace std;

//multilevel inheritance

class A
{
    void privatemem()
    {
        cout << "Parent private member" << endl;
    }

public:
    A()
    {
        cout<<"Parent constructor\n";
    }
    void Parent()
    {
        cout << "Parent" << endl;
    }
    void callPrivate() {
        privatemem();
    }
};

class B : public A
{
    public:
    B(){
        cout <<"Child B constructor\n";
    }
    void child()
    {
        cout << "Child B\n";
    }
};

class C : public B{
    public :
    C(){
        cout <<"Child C Constructor\n ";
    }
    void child(){
        cout <<"overrided child";
    }
};

int main()
{
    C obj;
    obj.callPrivate();
    obj.child();
    B obj2;
    obj2.child();
    return 0;
    

}