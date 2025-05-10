//Pair is used to combine together two values that may be of different data types
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p; // method of declaring a pair
    p = {1, 2};
    cout << p.first << " " << p.second << endl; // way of accessing the element
    pair<int, pair<int, int>> p1 = {2, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    pair<string, string> p2 = {"Shubam", "tiwari"};
    cout << p2.first << " " << p2.second << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}}; // declaring array of pair
    cout << arr[1].first << " " << arr[1].second;
    return 0;
}

//theory of the pair
/*        In C++, a pair is not a container in the traditional sense. 
A container typically refers to data structures like vector, list, set, map, and so on,
which are part of the Standard Template Library (STL) and are used to store collections of elements.
A pair, on the other hand, is a simple, fixed-size container that can hold exactly two values of possibly 
different types. It is defined in the <utility> header and is often used to store and return two related
values together, such as key-value pairs in a map.*/