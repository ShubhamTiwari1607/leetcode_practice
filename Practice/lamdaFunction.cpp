#include<bits/stdc++.h>

using namespace std ;

int main(){
    float x = 10.20 , y = 20 ;
    function<int()> sum = [x,y]()->float{
        return x+y ;
    };

    cout <<"the sum is:" << sum();
    return  0;

}