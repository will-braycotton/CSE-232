#include <vector>
#include <iostream>
#include "header.hpp"
using std::cout; using std::endl;
using std::vector;
int * FindSmallestIndexRanges( const vector<int> &v, int first, int last ){
  int i=0;
  int lowest= v[first];
  int * ptr;
  for ( int a : v){
    if (( i > first-1 ) && ( i < last+1 )){
      if (a < lowest){
        ptr = &a;
        lowest = a;
      }
    }
    i++;
    cout << *ptr << endl;
  }
  return ptr;
}

const int * FindSmallestIndexRange( const vector<int> &v, int first, int last ){
  int i=0;
  int lower = v[first];
  const int * result;
  for ( auto ptr = v.begin(); ptr != v.end(); ++ptr){
    if ((i >= first) && (i <= last)){
      if ( *ptr < lower ){
        result = &(*ptr);
        lower = *ptr;
      }
    }
    i++;
  }
  return result;
}

int main (){
std::vector<int> data = {6, 1, 5, 4, 3, 2, -1};
auto iter_smallest = FindSmallestIndexRange(data, 2, 5);
cout << *iter_smallest << endl;
//CHECK(*iter_smallest == 2);
iter_smallest = FindSmallestIndexRange(data, 2, 4);
cout << *iter_smallest << endl;
//CHECK(*iter_smallest == 3);
iter_smallest = FindSmallestIndexRange(data, 1, 5);
cout << *iter_smallest << endl;
//CHECK(*iter_smallest == 1);
iter_smallest = FindSmallestIndexRange(data, 0, 5);
cout << *iter_smallest << endl;
//CHECK(*iter_smallest == 1);
iter_smallest = FindSmallestIndexRange(data, 0, 6);
cout << *iter_smallest << endl;
//CHECK(*iter_smallest == -1);
}