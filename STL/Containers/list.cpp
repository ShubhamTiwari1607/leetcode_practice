/*In C++, the std::list is a doubly linked list container provided by the Standard Template Library (STL).
It allows fast insertions and deletions at both ends and from the middle, but it is slower than std::vector
when it comes to random access.*/


#include<bits/stdc++.h>
using namespace std ;

int main(){
    list<int> l ;
    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    l.emplace_front(4);
    l.emplace_front(5);

    for(auto it: l){
        cout<<it<<" ";
    }
    cout<<endl;

    l.pop_front();
    l.pop_back();

    for(auto it: l){
        cout<<it<<" ";
    }
    //all other function are same as the vector like erase,swap,insert,emplace_back

    l.insert(l.begin(),5);
    cout<<endl;

    for(auto it: l){
        cout<<it<<" ";
    }

    l.erase(l.begin());
    cout<<endl;

    for(auto it: l){
        cout<<it<<" ";
    }
    
    return 0;
}