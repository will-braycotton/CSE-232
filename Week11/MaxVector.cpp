#include "MaxVector.hpp"
#include <vector>
#include <cassert>
using std::vector;
#include <iostream>
using std::endl; using std::cout;

                             
int main() {
  std::vector<int> const vec_a = {1, 20, -3, 7, 56, 0, -2};
  std::vector<int> const vec_b = {10, 4, -3, 8};
  std::vector<int> const expected = {10, 20, -3, 8, 56, 0, -2};
  std::vector<int> result = MaxVector<int>(vec_a, vec_b);
  for ( int i : result){
    cout << i << " " << endl;
  }


  std::vector<std::string> const vec_c = {"hello", "apple", "CSE"};
  std::vector<std::string> const vec_d = {"bye", "banana"};
  std::vector<std::string> const expected2 = {"hello", "banana", "CSE"};
  std::vector<std::string> resulta = MaxVector(vec_c, vec_d);
  //cout << assert(MaxVector(vec_c, vec_d) == expected2) << endl;
  for ( auto i : resulta){
    cout << i << " " << endl;
  }
}