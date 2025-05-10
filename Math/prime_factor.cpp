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
vector<int> prime_factor(int num)
{
    vector<int> list;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (isPrime(i))
            {
                list.push_back(i);
            }
            int pairedDivisor = num / i;
            if (pairedDivisor != i && isPrime(pairedDivisor))
            { // Avoid duplicates
                list.push_back(pairedDivisor);
            }
        }
    }
    return list ;
}

int main()
{
    int num = 780;

    vector<int> list = prime_factor(num);

    for (auto x : list)
    {
        cout << x << " ";
    }
    return 0;
}
