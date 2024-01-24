#include "counter.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::string; using std::vector; using std::ostringstream; using std::ostream;
using std::cout; using std::endl;


Counter::Counter(){
    og_number = 0;
    number = 0;
    string str = "Default Constructor called.";
    log_.push_back(str);
    
}

Counter::Counter(int val){
    og_number = val;
    number = val;
    string str = "Constructor called with a " + std::to_string(val);
    log_.push_back(str);
}

Counter::Counter( Counter const &old){
    number = old.number;
    og_number = old.og_number;
    log_= old.log_;
    string str = "Copy Constructor called.";
    log_.push_back(str);
    
}

int Counter::Value(){
    int val = number;
    number = number - 1;
    string str = "Value called. Returned a " + std::to_string(val);
    log_.push_back(str);
    return val;
}

ostream & operator<<(ostream &out, Counter &c){
    string s = "Counter(" + std::to_string(c.og_number) + ")@" + std::to_string(c.number);
    out << s;
    string str = "<< called.";
    c.log_.push_back(str);
    return out;
}

Counter operator+(Counter const &c1, Counter const &c2){
    Counter new_c( c1.og_number + c2.og_number);
    string str = "+ called.";
    new_c.log_.push_back(str);
    new_c.number = c1.number + c2.number;
    return new_c;
}

Counter &Counter::operator=(Counter const &old){
    number = old.number;
    og_number = old.og_number;
    log_= old.log_;
    string str = "= called.";
    log_.push_back(str);

    return *this;
}


int main() {
	


Counter e;
if(e.log_.back() == "Default Constructor called."){
    cout << 1 << endl;
}
Counter c(5);
Counter d(c);
std::vector<std::string> expected {
  "Constructor called with a 5",
  "Copy Constructor called.",
};
if(d.log_ == expected){
    cout << 2 << endl;
}
e = d + c;
if(e.Value() == 10){
    cout << 3 << endl;
}
expected = {
  "Constructor called with a 10",
  "+ called.",
  "= called.",
  "Value called. Returned a 10"
};
if(e.log_ == expected){
    cout << 4 << endl;
}
}