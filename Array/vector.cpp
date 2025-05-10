#include <iostream>
#include <vector>

using namespace std ;


int main(){
  vector<int> vec ;
  int arr[10]  = {1,2,3,4,5,6,7,8,9,10} ;

  int *pointer = &arr[9] ;
  cout << &pointer <<endl;
  
  auto it1 = begin(arr) ; //return a pointer to the beginning element
  auto it2 = end(arr) ; //return a pointer to the end element

  cout <<"the value of the begin is "<< it1 <<endl ;
  cout <<"the value of the end is "<< it2<<endl ;

  for(auto it1 = begin(arr) ;it1 != it2;it1++){
    vec.push_back(*it1) ;  //entering element in the vector using push_back function in c++ stl 
  }

  for( int i = 0 ;i < vec.size() ; i++){
    cout<<vec[i]<<endl ;
  }

  //poping the element in the vector 
   vec.pop_back();

   for( int i = 0 ;i < vec.size() ; i++){
    cout<<vec[i]<<endl ;
  }

  return 0 ;
}