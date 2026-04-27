#include<bits/stdc++.h>
using namespace std ;

int main(){
  int a = 10 , b = 40 ;

  auto sum = [a,b](){  //[a,b] captures the value of a , b by value
    return a + b ;
  };

  auto swap = [&a,&b](){ //[&a,&b] captures the value of a , b by reference
    int temp = a ;
    a = b ;
    b = temp;
  };
  
  swap();
  cout << "swapped value of a : "<< a <<"\nswapped value of b: "<<b<<"\n";
  cout << sum();
  return 0 ;
}
