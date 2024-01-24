#include "Penultimate.hpp"
#include <string>
#include <cassert>
using std::string;

Penultimate::Penultimate( string s){
    main.push_back(s);
}

string Penultimate::push_back( string str){
    string result;
    if ( !main.empty()){
        result = main.back();
    }
    main.push_back(str);
    return result;
}


