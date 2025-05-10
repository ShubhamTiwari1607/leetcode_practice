#include<bits/stdc++.h>
using namespace std ;

int main(){
    set<int> st ;
    st.insert(1);   //inserting the data set stores unqiue data in sorted fashion so no item can occur two times in the set
    st.emplace(2);
    st.emplace(3);
    st.emplace(4);
    st.emplace(5);

    //begin(),end(),rend(),swap(),size()

    st.erase(5); //use to delete the element we can also pass iterator in place of the element

    auto it = st.find(4); // find return the address of the element
    st.erase(it) ;

    set<int>::iterator it = st.find(1); //if  x is not in the set then the st.find(x) will return a value st.end()

    cout<<*(it)<<endl ;
    cout<<st.size();

    return 0;
    
}