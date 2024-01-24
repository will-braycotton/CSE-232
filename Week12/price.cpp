#include "price.hpp"
#include <iostream>
#include <string>
#include <ostream>
#include <sstream>
#include <iomanip>
using std::string; using std::cout; using std::endl; using std::ostream; using std::istream;

Price::Price(){
    number = 0.00;
}

Price::Price(double num){
    number = num;
}

string price_to_str ( Price number ){
    string str;



    return str;
}

ostream & operator<<(ostream &out, const Price &p){
    out << '$' << std::fixed <<  std::setprecision(2) << p.number;

    return out;
}

Price operator+(Price const &p1, Price const &p2){
    Price new_p;
    new_p.number = p1.number + p2.number;
    return new_p;
}
Price operator+=( Price &p1, Price const &p2){
    p1.number = p1.number + p2.number;
    return p1;
}

Price operator-(Price const &p1, Price const &p2){
    Price new_p;
    new_p.number = p1.number - p2.number;
    return new_p;
}
Price operator-=( Price &p1, Price const &p2){
    p1.number = p1.number - p2.number;
    return p1;
}

Price & operator >> ( std::istringstream &iss, Price & p){
    string s = iss.str();
    cout << "this is " << s << endl;
    string price = s.substr(1, s.size()-1);
    double num = stod(price); 
    p.number = num;

    return p;
}

int main(){
    




Price p;
std::istringstream iss("$12.45");
iss >> p;
Price p2 = p + p;
std::ostringstream oss;
oss << p << " " << p2;
if(oss.str() == "$12.45 $24.90"){
    cout << "true";
}

}