#include<iostream>  
using namespace std ;

class shape{
   public :
   virtual void  draw() = 0;
};

class circle: public shape{
    // void draw() override {
    //   cout << "drawing a circle\n";
    // }
};