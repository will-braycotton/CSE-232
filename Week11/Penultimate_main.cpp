#include "Penultimate.hpp"
#include <string>
#include <cassert>
#include <iostream>
using std::endl; using std::cout;

int main() {
  Penultimate p("first");
  std::string s = p.push_back("second"); // s is "first"
  cout << s << endl;;
  p.push_back("Third"); // returns "second"
  s = p.push_back("last"); // returns "Third"
  cout << s << endl;
}