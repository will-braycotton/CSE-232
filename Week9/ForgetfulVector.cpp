#include "ForgetfulVector.h"
#include <vector>
#include <iostream>
using std::vector;
using std::endl; using std::cout;


void ForgetfulVector::push_back( int num){
    if (find(first_occurance.begin(), first_occurance.end(), num) != first_occurance.end()){
        main.push_back(num);
    }
    else{
        first_occurance.push_back(num);
    }
}
int ForgetfulVector::at(int  num){
return main[num];
}
int ForgetfulVector::size(){
return main.size();
}

void ForgetfulVector::print(){
    for (int i: main){
        cout << i << endl;
    }
}