#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2 || num == 3)
        return true; // 2 and 3 are prime numbers
    if (num % 2 == 0 || num % 3 == 0)
        return false; // Eliminate multiples of 2 or 3
    for (int i = 5; i * i <= num; i += 6)
    { // Check only 6k ± 1
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main(){
    int num = 7 ;
    if(isPrime(num)){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    return 0;
}