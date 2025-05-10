#include<iostream> //buy at low price and sell at high price based on two pointer 
using namespace std;

//right pointer will iterate over the array and left will point the smallest element

int main(){
    int Arr[6] = {7,1,5,3,6,4} ;
    int size = 6 ;
    int l = 0, r = 1 ; //two pointer left and right 
    int profit = 0 ;
    while(r<size){
        if(Arr[l] < Arr[r]){
            if(Arr[r]-Arr[l]>profit){
              profit = Arr[r] -Arr[l];
            }
        }else{
            l = r;
        }
        r++;
    }
    cout<<profit;
    return 0;
}