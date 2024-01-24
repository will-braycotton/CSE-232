#pragma once
#include <vector>
using std::vector;
#include <iostream>
using std::cout; using std::endl;

class PythonicIntVector{
    private:
    std::vector<int> main;
    
    public:
    int& at(int );
    void push_back(int);
};