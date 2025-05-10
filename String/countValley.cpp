#include<bits/stdc++.h>
using namespace std;

int countValley(string path){
    int elevation=0,count=0;
    for(auto x:path){
        if(x=='U'){
            elevation++;
            if(elevation==0){
                count++;
            }
        }else{
            elevation--;
        }
    }
    return count;
}
int main(){
string path="UDDDUDUU";
int count = countValley(path);
cout<<count;
return 0;
}