#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>
using std::iota;
using std::vector;
using std::pair;
using std::string;
using std::cout; using std::endl;
using std::back_inserter;

// Write your functions here!
bool Pass (pair < string, int> p){
    if (p.second > 599){
        return true;
    }
    else {
        return false;
    }
}
bool Fail (pair < string, int> p){
    if (p.second < 600){
        return true;
    }
    else {
        return false;
    }
}

void PassOrFail(std::vector<std::pair<std::string, int> > &v) {
  vector < pair <string, int> > passing;
  vector < pair <string, int> > failing;
  copy_if(v.begin(),v.end(), back_inserter(passing), Pass); 
  sort(passing.begin(), passing.end());

  copy_if(v.begin(),v.end(), back_inserter(failing), Fail);
  sort(failing.begin(), failing.end());

  v.clear();
  copy(passing.begin(), passing.end(), back_inserter(v));
  copy(failing.begin(), failing.end(), back_inserter(v));
}


void ShiftRange(std::vector<int> &v, int left, int right) {
  vector< int> non_range;
  vector <int> in_range;
  copy_if(v.begin(),v.end(), back_inserter(in_range), [left,right](int i){ return ((i >= left)&& (i <= right));});
  copy_if(v.begin(),v.end(), back_inserter(non_range), [left,right](int i){ return ((i < left) || (i > right));});
  sort(in_range.begin(), in_range.end());
  sort(non_range.begin(), non_range.end());

    v.clear();
  copy(non_range.begin(), non_range.end(), back_inserter(v));
  copy(in_range.begin(), in_range.end(), back_inserter(v));
    for (int a : v){
        cout << a << endl;
    }

}


std::vector<int> Fibonacci(int n) {
  std::vector<int> result(n);
  int val=1;
  int a=0;
  int b=0;
  int c=1;
  iota(result.begin(), result.end()  , 1);
  for_each(result.begin(), result.end(), [&a,&b,&c] (int &n) {
    n = a + b + c;
    c = 0;
    a = b;
    b = n;

    }
    
    );
  return result;
}

int main(){
    for ( int a : Fibonacci(8)){
        cout << a << endl;
    }

}