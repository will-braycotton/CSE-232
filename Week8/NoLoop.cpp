#include <vector>
#include <iostream>
#include <iterator>
#include "header.hpp"
using std::cout; using std::endl;
using std::vector;


std::vector<int>::const_iterator FindSmallestIndexRange( const vector<int> &v, int first, int last ){
  int i=0;
  int lower = 99999999;
  std::vector<int>::const_iterator result;
  for ( std::vector<int>::const_iterator ptr = v.begin(); ptr != v.end(); ++ptr){
    if ((i >= first) && (i <= last)){
      if ( *ptr < lower ){
        result = ptr;
        lower = *ptr;
      
    }
    }
    i++;
  }
  return result;
}




int main (){
std::vector<int> data = {6, 1, 5, 0, 3, 2, 1};
DoubleIteratorRange<vector<int>::iterator>(data.begin(), data.end());
for ( int a : data){
    cout << a << endl;
}

std::vector<float> m = {5.6, 2.3, 12, 19};
DoubleIteratorRange<vector<float>::iterator>(m.begin(), m.end());
for ( float a : m){
    cout << a << endl;
}

}