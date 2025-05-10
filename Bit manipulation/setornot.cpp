#include<bits/stdc++.h>
using namespace std ;

bool setornot(int i,int binaryNum){
  if(((binaryNum>>i-1) & 1) == 0)return false;
  return true ;
}

int main(){
    int binaryNum = 9;
    if(setornot(1,binaryNum)){
        cout<<"bit is set";
    }else{
        cout<<"bit not set";
    }
    return 0;
}