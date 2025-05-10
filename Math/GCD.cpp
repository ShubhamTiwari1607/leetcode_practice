#include<bits/stdc++.h>
using namespace std ;

long long gcd(long long dividend, long long divisor){
    while(divisor != 0){
        long long rem = dividend % divisor;
        dividend = divisor;
        divisor = rem;
    }
    return dividend;
}
long long lcm(long long a, long long b){
    long long hcf = gcd(a, b);
    long long lcm = (a * b) / hcf;
    return lcm;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long res = lcm(a, b);
        cout << res << "\n";
    }
    return 0;
}