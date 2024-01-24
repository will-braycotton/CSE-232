#pragma once
#include <iostream>
#include <string>
#include <ostream>
#include <sstream>
#include <iomanip>
using std::string; using std::cout; using std::endl; using std::ostream;

class Price{
    private:
    double number;

    public:
    Price();
    Price(double  );

    
    friend Price operator+(Price const &p1, Price const &p2);
    friend Price operator+=( Price &p1, Price const &p2);
    friend ostream & operator<<(ostream &, const Price &);
    friend Price operator-(Price const &p1, Price const &p2);
    friend Price operator-=(Price &p1, Price const &p2);
    friend Price & operator >> ( std::istringstream &iss, Price & p);
};