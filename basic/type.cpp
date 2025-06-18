#include<bits/stdc++.h>
using namespace  std ;

typedef vector<pair<int,int>> P ;

int main(){
  P directions = {{1,0},{0,1},{-1,0},{0,-1}} ;
  for(pair<int,int> &dir : directions){
    cout << "x coordinate = " << dir.first <<", y coordinate = " << dir.second ;
    cout<<endl;
  }
  return 0 ;
}