#include<iostream>
using namespace std;

int sqrt(int x){
    int res = 0;
    int l = 1 , r = x/2 ;
    if(x<2)return x;
    while(l<=r){
      int mid = l + ((r-l)/2) ;
      long  int sqr = (long long) mid*mid;
      if(sqr == x){
        return  mid;
      }else if(sqr>x){
        r = mid-1 ;
      }else{
        l= mid+1;
        res = mid ;
      }
    }
    return res;
}

int main()
{
    int x = sqrt(49) ;
    cout<<x;
    return 0;
}