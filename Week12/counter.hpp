#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::string; using std::vector; using std::ostringstream; using std::ostream;
using std::cout; using std::endl;

class Counter{
    private:
    int number;
    int og_number;

    public:
    Counter();
    Counter(int);
    Counter( Counter const &);
    int Value();
    vector<string> log_;
    Counter &operator=(Counter const &old);
    
    friend ostream & operator<<(ostream &out, Counter &c);
    friend Counter operator+(Counter const &c1, Counter const &c2);
};