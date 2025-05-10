//vector is a dynamic sized continer
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declaring vector

    vector<int> v1(10); // vector of size 10 with each position filled with a garbage value

    vector<int> v2(5, 5); // vector of size 5 with each position filled with 5

    vector<int> v3 = {1,2,3,4,5} ; //vecctor array

    // pushing elements in the vector
    v1.push_back(1); // using the push back function;

    v1.emplace_back(2); // using the emplace back function, more efficient ways of inserting the value

    vector<pair<int, int>> v;

    v.push_back({1, 2});
    v.emplace_back(3, 4);

    //iterating over the vector created 
     cout<<" \n";

     v2.emplace_back(2);
    //using the iterator it where it points to the memory location of the vector element

    for(vector<int>::iterator it = v2.begin() ; it != v2.end();it++){
        cout<<*(it)<<" ";
    }
      cout<<" \n";

    for(auto it = v2.begin();it!=v2.end();it++){
        cout<<*(it)<<" ";
    }

    return 0;
}