#include<bits/stdc++.h>
using namespace std;

//given a integer array create the largest number from the a

int createlargestnumber(vector<int> &arr){
    auto comp = [](int a,int b){
        string a1 = to_string(a);
        string b1 = to_string(b) ;
        return a1+b1>b1+a1;
    };
    sort(arr.begin(),arr.end(),comp);
    string res = "";
    for(auto x:arr){
        res+=to_string(x);
    }
    int result= stoi(res);
    return result;
}
int main(){
  vector<int> arr= {1,2,3,4,1,3,30};
  int result = createlargestnumber(arr);
  cout<<result;
  return 0;
}