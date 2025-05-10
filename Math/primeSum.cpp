// to find  that whether the number can be expressed as the sum of the two  prime number
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

bool sumofNumber(int num)
{
    for (int i = 2; i < num / 2; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(num - i))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int a = 5;
    if (sumofNumber(a))
    {
        cout << "Number can be expressed";
    }
    else
    {
        cout << "cannot be expressed";
    }
    return 0;
}