#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10); // TC=>O(log n)
    pq.push(11);
    pq.push(9);
    pq.push(40);
    cout << pq.top() << endl; // TC=>O(1)
    pq.pop();                 // TC=>O(log n)
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    return 0;
    
}