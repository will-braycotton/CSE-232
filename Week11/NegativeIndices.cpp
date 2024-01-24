#include "NegativeIndices.hpp"
#include <vector>
using std::vector;
#include <iostream>
using std::cout; using std::endl;


void PythonicIntVector::push_back( int num){
    main.push_back(num);
}

int& PythonicIntVector::at( int i){
    if (i < 0){
        i = main.size()+i;
    }
    return main.at(i);
}



int main(){
    PythonicIntVector v;
v.push_back(8);
cout << v.at(0) << endl; //8
v.push_back(10);
cout << v.at(0) << endl; //8
cout << v.at(1) << endl; //10
v.at(0) = 100; //ERRROR
cout << v.at(0) << endl; //100
cout << v.at(1) << endl; //10
v.push_back(3);
cout << v.at(0) << endl ; //100
cout << v.at(1) << endl ; //10
cout << v.at(2) << endl; // 3
cout << v.at(-1) << endl; //3
cout << v.at(-2) << endl; //10
cout << v.at(-3) << endl; //100
}